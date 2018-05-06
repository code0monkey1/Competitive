#if !LINQPAD
using System;
using System.Linq;
#endif
 
class ShilAndLuckyString
{
	static void Main ()
	{
		Console.ReadLine();
 
		var s = Console.ReadLine().Trim();
		int h = s.Length >> 1;
		var l = new int[1 + 'z'];
		var r = new int[1 + 'z'];
 
		foreach (var c in s.Substring(0, h))
			++l[c];
 
		foreach (var c in s.Substring(h, h))
			++r[c];
 
		int eq = 0, nl = 0, nr = 0;
 
		for (int c = 'a'; c <= 'z'; ++c)
		{
			eq += Math.Min(l[c], r[c]);
			nl += l[c] - Math.Min(r[c], nl);
			nr += r[c] - Math.Min(l[c], nr);
 
			if (c == 'a')
			{
				nl += Math.Min(r['a'], l['z']);
				nr += Math.Min(l['a'], r['z']);
			}
		}
 
		Console.WriteLine(Math.Min(h - eq, Math.Min(nl, nr)));
	}
}