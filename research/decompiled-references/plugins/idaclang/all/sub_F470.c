__int64 __fastcall sub_F470(__int64 a1, __int64 a2)
{
  bool v3; // zf
  _BYTE *v4; // rax
  __int64 v5; // rsi
  const char *v6; // rdx
  void *v7; // rdi
  void *v9; // rdi
  unsigned __int64 v10; // r13
  const char *v11; // rdx
  const void *v12; // rbp
  void *dest; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = (*(_BYTE *)(a2 + 132) & 0x20) == 0;
  dest = nullptr;
  v14 = 0;
  if ( v3 )
  {
    dest = (void *)qvector_reserve(&dest, 0, 12, 1);
    *(_QWORD *)&v14 = 12;
    strcpy((char *)dest, "<anonymous>");
    v9 = dest;
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 > 1 )
    {
      v12 = *(const void **)(a2 + 16);
      if ( *((_QWORD *)&v14 + 1) < v10 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v10, 1);
        v9 = dest;
      }
      *(_QWORD *)&v14 = v10;
      memmove(v9, v12, v10 - 1);
      *((char *)dest + v10 - 1) = 0;
    }
    v11 = s1;
    if ( (_QWORD)v14 )
      v11 = (const char *)dest;
    sub_67C0((__int64 *)a1, (__int64)"field %s", v11);
    v7 = dest;
    if ( dest )
      goto LABEL_5;
    return a1;
  }
  v4 = (_BYTE *)qvector_reserve(&dest, 0, 10, 1);
  dest = v4;
  *(_QWORD *)&v14 = 10;
  *(_QWORD *)v4 = 0x6E776F6E6B6E753CLL;
  v4[8] = 62;
  *((_BYTE *)dest + 9) = 0;
  v5 = *(_QWORD *)(a2 + 64);
  if ( (v5 & 0x100) == 0 )
  {
    v6 = s1;
    if ( !(_QWORD)v14 )
      goto LABEL_4;
    goto LABEL_12;
  }
  get_tinfo_pdata(&dest, v5, 0);
  v6 = s1;
  if ( (_QWORD)v14 )
LABEL_12:
    v6 = (const char *)dest;
LABEL_4:
  sub_67C0((__int64 *)a1, (__int64)"baseclass %s", v6);
  v7 = dest;
  if ( dest )
  {
LABEL_5:
    *(_QWORD *)&v14 = 0;
    qfree(v7);
  }
  return a1;
}
