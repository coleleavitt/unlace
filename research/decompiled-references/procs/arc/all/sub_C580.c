__int64 __fastcall sub_C580(int *a1, __int64 a2)
{
  __int64 *v2; // rax
  unsigned __int64 v3; // rdx
  int v4; // r12d
  int v6; // [rsp+0h] [rbp-18Ch] BYREF
  __int128 v7; // [rsp+4h] [rbp-188h] BYREF
  __int64 v8; // [rsp+14h] [rbp-178h]
  __int64 v9; // [rsp+1Ch] [rbp-170h]
  __int64 v10; // [rsp+24h] [rbp-168h]
  __int64 v11; // [rsp+2Ch] [rbp-160h] BYREF
  __int64 v12; // [rsp+3Ch] [rbp-150h]
  __int64 v13; // [rsp+54h] [rbp-138h]
  __int64 v14; // [rsp+64h] [rbp-128h]
  char v15; // [rsp+74h] [rbp-118h]
  _QWORD v16[4]; // [rsp+16Ch] [rbp-20h] BYREF

  v16[0] = __readfsqword(0x28u);
  v2 = &v11;
  v7 = -1;
  v8 = -1;
  v9 = 0;
  v10 = 0;
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
  while ( v16 != v2 );
  if ( (int)decode_insn(&v7, a2, v16, 0.0) <= 0 )
    return 0;
  v3 = v9 & 0x600000FFFFLL;
  if ( (v9 & 0x600000FFFFLL) == 0x2000000011LL )
  {
    v3 = v11 & 0xFFFF00000000FF00LL;
    if ( (v11 & 0xFFFF00000000FF00LL) == 0x1F000000000400LL && !v12 )
    {
      if ( (int)decode_insn(&v7, v8 + WORD1(v9), 0x1F000000000400LL, 0.0) > 0
        && ((_WORD)v9 == 45 && BYTE1(v11) == 1
         || (v9 & 0xFFFFFFFF0000FFFFLL) == 0x800000003LL
         && (v13 & 0xFFFF00000000FF00LL) == 0x1C000000000400LL
         && !v15
         && v14 == -4)
        && HIWORD(v11) == 13 )
      {
        goto LABEL_32;
      }
      return 0;
    }
  }
  if ( (_WORD)v9 != 45 || BYTE1(v11) != 1 )
  {
    if ( (v9 & 0xFFFFFFFF0000FFFFLL) != 0x800000003LL )
      return 0;
    v3 = 0x1C000000000400LL;
    if ( (v13 & 0xFFFF00000000FF00LL) != 0x1C000000000400LL || v15 || v14 != -4 )
      return 0;
  }
  v4 = HIWORD(v11);
  if ( HIWORD(v11) != 13 )
  {
    if ( (unsigned int)HIWORD(v11) - 14 <= 0xC && (unsigned __int8)sub_C580(&v6, v8 + WORD1(v9)) && v4 - 1 == v6 )
      goto LABEL_27;
    return 0;
  }
  if ( (int)decode_insn(&v7, v8 + WORD1(v9), v3, 0.0) <= 0
    || (v9 & 0xFFFFFFFF0000FFFFLL) != 0x11
    || (v11 & 0xFFFF00000000FF00LL) != 0x1F000000000400LL
    || v12 )
  {
    return 0;
  }
LABEL_32:
  v4 = 13;
LABEL_27:
  *a1 = v4;
  return 1;
}
