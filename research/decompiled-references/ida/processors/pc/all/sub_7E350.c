unsigned __int64 __fastcall sub_7E350(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r13
  unsigned __int8 v5; // bp
  const char *v6; // r15
  size_t v7; // rax
  const char *v8; // rdx
  _DWORD *v10; // rsi
  int v11; // [rsp+8h] [rbp-F0h]
  __int64 v12; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v13; // [rsp+18h] [rbp-E0h]
  _BYTE v14[136]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+B8h] [rbp-40h]

  v3 = 32;
  v15 = __readfsqword(0x28u);
  if ( a3 < 0 )
    v3 = 45;
  v13 = 0;
  v12 = 0;
  if ( !(unsigned __int8)get_idainfo_by_type() || sub_7DFE0((__int64)&v12, v11) < 0 )
  {
    v10 = (_DWORD *)v12;
    if ( *((_QWORD *)&v13 + 1) <= 4u )
    {
      v12 = qvector_reserve();
      v10 = (_DWORD *)v12;
    }
    *(_QWORD *)&v13 = 5;
    *v10 = 1702132066;
    *(_BYTE *)(v12 + 4) = 0;
  }
  btoa64();
  v5 = getinf();
  v6 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v6 = *(const char **)(a2 + 16);
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v6, 25);
  if ( v6 )
  {
    v7 = strlen(v6);
    if ( v7 < v5 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 32, v5 - (unsigned int)v7);
  }
  v8 = s1;
  if ( (_QWORD)v13 )
    v8 = (const char *)v12;
  sub_7DA30(a1, (__int64)&unk_91915, v8, (unsigned int)v3, v14);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}
