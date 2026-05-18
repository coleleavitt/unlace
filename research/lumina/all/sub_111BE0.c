__int64 __fastcall sub_111BE0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r15
  __int64 v3; // r12
  unsigned int *v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-58h]
  unsigned int v7; // [rsp+Ch] [rbp-4Ch]
  unsigned int v8; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_BYTE *)a1 )
  {
    v8 = 0;
  }
  else
  {
    result = sub_EBBD0(a1);
    v8 = result;
    if ( (_DWORD)result )
      return result;
  }
  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (_WORD)v1 )
  {
    v2 = 0;
    v3 = 2LL * (unsigned int)(v1 - 1) + 2;
    do
    {
      while ( 1 )
      {
        v4 = (unsigned int *)(*(_QWORD *)(a1 + 80)
                            + (unsigned __int16)(*(_WORD *)(a1 + 26) & __ROL2__(
                                                                         *(_WORD *)(*(_QWORD *)(a1 + 96) + v2),
                                                                         8)));
        sub_111B10(a1, (unsigned __int64 *)(a1 + 88), (unsigned __int64)v4, (int *)&v8);
        if ( !*(_BYTE *)(a1 + 8) )
          break;
        v2 += 2;
        if ( v3 == v2 )
          goto LABEL_8;
      }
      v2 += 2;
      sub_111970(v6, _byteswap_ulong(*v4), 5, v7, (int *)&v8);
    }
    while ( v3 != v2 );
  }
LABEL_8:
  if ( !*(_BYTE *)(a1 + 8) )
    sub_111970(
      v6,
      _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(a1 + 80) + *(unsigned __int8 *)(a1 + 9) + 8LL)),
      5,
      v7,
      (int *)&v8);
  return v8;
}
