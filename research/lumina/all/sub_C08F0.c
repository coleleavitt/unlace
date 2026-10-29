_QWORD *__fastcall sub_C08F0(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // r12
  _QWORD *v3; // rbp
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v1 = (_BYTE *)sub_1987B0(&ptr, 0, 10, 1);
  ptr = v1;
  *(_QWORD *)&v6 = 10;
  *(_QWORD *)v1 = 0x6E656B6361625F5FLL;
  v2 = ptr;
  v1[8] = 100;
  v2[9] = 0;
  v3 = sub_C07E0(a1, (__int64)&ptr);
  if ( v2 )
  {
    *(_QWORD *)&v6 = 0;
    j__free(v2);
  }
  if ( v3 == (_QWORD *)(a1 + 8) )
  {
    if ( !unk_2439A0 )
      sub_198E10(1584);
    BUG();
  }
  return v3 + 7;
}
