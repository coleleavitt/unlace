unsigned __int64 __fastcall sub_C3C0(_QWORD *a1, char a2)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+0h] [rbp-178h] BYREF
  __int64 v5; // [rsp+10h] [rbp-168h]
  __int64 v6; // [rsp+18h] [rbp-160h]
  __int64 v7; // [rsp+20h] [rbp-158h]
  _BYTE v8[320]; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v9[2]; // [rsp+168h] [rbp-10h] BYREF

  v9[0] = __readfsqword(0x28u);
  v2 = v8;
  v4 = -1;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( v9 != v2 );
  if ( a2
    && (unsigned int)decode_insn(&v4, *a1, v9, 0.0)
    && ((v6 & 0x600000FFFFLL) != 0x4000000012LL || v8[1] != 7)
    && (unsigned __int16)v6 > 4u
    && (v6 & 0x6000000000LL) != 0 )
  {
    *a1 += WORD1(v6);
  }
  return v9[0] - __readfsqword(0x28u);
}

