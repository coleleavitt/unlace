__int64 __fastcall sub_33A40(__int64 a1)
{
  void (__fastcall ***v1)(_QWORD); // rdi
  __int64 v2; // rbx
  bool v3; // zf
  void (__fastcall ***v4)(_QWORD); // rdi
  __int64 v6; // [rsp+0h] [rbp-90h] BYREF
  __int64 v7; // [rsp+8h] [rbp-88h] BYREF
  __int64 v8; // [rsp+10h] [rbp-80h] BYREF
  void *v9; // [rsp+18h] [rbp-78h] BYREF
  __int128 v10; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v12; // [rsp+40h] [rbp-50h]
  int v13; // [rsp+50h] [rbp-40h]
  unsigned __int64 v14; // [rsp+60h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v10 = 0;
  v9 = nullptr;
  sub_299F0((char **)&v9);
  ptr = nullptr;
  v13 = -1;
  v12 = 0;
  unk_241E58(&v6, a1);
  if ( !v6 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2743);
    BUG();
  }
  unk_241E60(&v8, &v6, &ptr);
  unk_241E70(&v8, &ptr);
  sub_2F910((__int64)&ptr, (__int64)&v8, (__int64)"U", &v7);
  v1 = (void (__fastcall ***)(_QWORD))v8;
  v2 = v7;
  if ( v8 )
  {
    v3 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v3 )
      (**v1)(v1);
  }
  v4 = (void (__fastcall ***)(_QWORD))v6;
  if ( v6 )
  {
    v3 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v3 )
      (**v4)(v4);
  }
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    j__free(ptr);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    j__free(v9);
  }
  return v2;
}
