
# random-string

Utility for generating cryptographically-strong strings of arbitrary length

## Building

I didn't use autotools as I thought it was overkill for a simple prototype, so running `make` is the only required step. `make install` does **not** work at the moment, although I do plan on implementing it.

You can run `make check` after building to run the test suite, but be advised it requires the [CUnit Test Framework](http://cunit.sourceforge.net/).

# Usage

The most basic example:

```
$ ./random-string
56R_&DMicDl}p4$!
```

You can use the `--length` and `--number` options (each with its own required argument) to specify the length and quantity of strings to generate.

```
$ ./random-string --length 128 --number 20
0^9"M?'C_PEQ-/ip;80=---nm0'"M;!1EAXX3347s10c]y`-[RkV})k-zjediE@^!0o6+CX$Z/xi2@@1V0iB2,[9*_Ip<>UGi-e1.vRyq#c/()t$BRc8^kS)AU*?<:>j
bPz4-;5EJ]9"'6DiWPU&7(q%1&@h9[$%0HT%Z=Cz3;1e&"/l264a@<&!i-P$UgOHH2y8N*)>jcVA@.1?g=0SZ)SIt.,W[Q(pG(M&)(M1W`a&B1%%7&e7GS<O$o5@8n?
TjRs^S5]!>)9-5bT,PwZ31#<.!2>;,8%s_#%p*=1m-Z,1QZt7~8oa^5>34#)e3GN'd7-I$Q29QL+)6]A`aA&#\q`B[%J5V'Bz*@@P<<<@yD$5@rm"1*p14"{#,IpxqL8
$v@mv|;48ciY*2%3(GCXT*S,24?AARF1+F*!<E>'x7;)mw^?E%@-65#$5n.%6O%](6U##%L5}_"l\&'gqAR>2jM0]Ys*#q56-sE/^>0I.6e.)?2B$t-&|0/W/2|&8u
2q=x87#jL1J:#Hj7#ZT,CH1*lRuRE?pT'k44._-GWX$;'G)>MA8b:(.k}M@O*r"+XAPJvC-J`;=7J/>mFn*5:c+ItY`/?,]=C<lA`>I?W=G+q_wO/4<YCx&U,A(3YMxP
857-5kaF01^{hTyS4U"*'v+Ft^@w<*B><?/_P,(b39-D,@zLsUi8P;yNr"qfd$.g-S>v&4%|@,=.VV`[_$9XIR,o2Ea[_2L0(o@pYp;+D0FG\.)M?]M1-|"j`|\(GNW
8>DOMT;A&,!BF+9HP|~p:8'%oGNg;]:#59pN;K*u/'4>]d.NulUOzM]q@hl.,,:?'7Ym03:3(0k@@b:8>kw.e":YCkxs)'AUADHhF}[hTRPiZ[C-d00a6xTqb\*z
cIg8F'A]r=;c5,<,7]i.+Bc#C'T7_(R@}qpj-8C,F'l9)Q}8Jf`m3'SEE97LRw9(OLqBm',!nCY-0|25flS@PpwH((z3QJ/m-"?dR%K@P}*+KM;!hBz4A2MIiLzz+
A&1Hi+<:"!4G25UC8Mo@:zGySTf<I'6,&i#!F!*&=?&V&,-oF1%0E0hcso'_RJ`T,di5T/:RC=s<_i"mRS1;(U-|N+S9t%:1cO34na>B7T%?t,@s//nG5$>)4&pdM<Y<
[#4U^0:Q"l,6JJ]'ZJ{PAx,Qfhk~2Qw?P0r6u9`e6.ceD.cv-9|A=A(0T/K)73i0<!61^X^|1pkclP&}H"7"C6B"/")X2W\_=5P:%00n6sA}gi&+"b\2K>g"B"2+<0nE
%>'%y^-+m"ocLV4Jt@s|KX>%GQ`e'4BWA;P'I==|7'd!N["Z7^^uUP|h/57%!`)2->8MD1e>VBO"E;JS&ik/a1J\1S*1"%qW\'<.t<L34IY6W#L$:P/e0'r&HzeO8'
)WdhW-?1:?X]r8N`%{j1'^`+VjY*!9vo't@M*-p;].qL!jmg/ja;X'$9<^!&4-V=Ttn@^"o\2z?5(M3\M\7VV!$(5UK<?3=c9c/Y<,n*-bF>EZu@5`<(3W?{K8FzW"?a
l{)%#GA}i+7vI<k<];9W}fY??2\}$4i;5*28"#R9(b^TfRD+m:Ygk|_!:35V,p6<'*=?Tg4a=X5A2wYAGD{*hXpojl0LjY}o?/^^'I*p$5_`=2:0+;@/wt6.U\nLYwb
&{26nv@I.=aC#'l#tR?tM@#=;)t9qjp.+0{t"g[5IQQ>TD!)8TNv_O&JX7D8$k^;qDG}=?bSe9(=D8Z,Xx6%o7X#!c8g2w^?'nO:K.1a7#$|fP31y!Y;TIuL61!Q<x*k
C:O75y=-(>bT:$|5=0<'O8,@,_H;p/)=$KHi,QuyF?21#F3/zs.9<-7+h\PK9W=#i?G'cu&-*'R\`t/2Ep_ef,5,vAoW^M_9oC.9J$!'-QU9#5-OTQDd.cL}s1bq:f
jU`}M2u&,Iajd~*(}-n3!%-8lZ/`s2&zPp2~Do)>q3:x]e`0p=#$:V6<w-?6|3;H0|niN"\/]>M9C?-kH%~S&v89P/-5//HT=$'")<#:=<bI"k;!4-A#u|rX'`l+o^
@'JLam[I0&[:59*@PmfI--Y?*|<A-ZV0,h~,b"C<["':=mf-w2.$|:]-1cJ0$vc";hYWsgHb0$Fo,-3^lx}TV"99Wc"47-;5,BJ&g9?=A&0(.WUAe|OA{U&/$2r\e
>t5Dz%JH4jPP"wAQ(wi[B=b7*wX}MJT'5N+3E]^v,73Ktev93?>]pvd?5[yq5)?4-:W2+>04B%~yT>7E5[wA?'b%X\5"%3Ru4--NY&==!E73q*q<![>@#|,|Njskrt;{
*1oC_!^a=^X?}]Z.u+b`g5_!voY?+65,"8B51~roFa;08![}1(=^)52%j3A=,z1:w:x42!,6{d/Agn9o1Fel'(K:L=7,i1+q?-5Zjh:Yu?w~\5-t)0>=$#5w3k:';[.1
pV;2vo/~B&UM40[1.Kv!k.'3VAduY="~0Q1P'U1)=3?5*<X4=GAg\=Q&o>!UU:5~J_7m;>."B:uI:Fad(&4?nAt(VW,E(uBDH'x*"hh+5!e''wmdd5T,t@%-py#JfC
```
