unsigned __int64 __fastcall sub_388D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  char v5; // al
  __int64 v6; // rdi
  bool v7; // zf
  void (__fastcall ***v8)(_QWORD); // rdi
  int v10; // eax
  int v11; // edx
  int v12; // [rsp+0h] [rbp-80h] BYREF
  int v13; // [rsp+4h] [rbp-7Ch] BYREF
  __int64 v14; // [rsp+8h] [rbp-78h] BYREF
  __int64 v15; // [rsp+10h] [rbp-70h] BYREF
  void *ptr; // [rsp+18h] [rbp-68h] BYREF
  void *v17[2]; // [rsp+20h] [rbp-60h]
  int v18; // [rsp+30h] [rbp-50h]
  int v19[2]; // [rsp+40h] [rbp-40h]

  *(_QWORD *)v19 = __readfsqword(0x28u);
  v12 = 0;
  ptr = nullptr;
  v18 = -1;
  *(_OWORD *)v17 = 0;
  unk_241E58(&v14, a2);
  if ( !v14 )
  {
    v4 = v12;
    goto LABEL_11;
  }
  unk_241E60(&v15, &v14, &ptr);
  unk_241E70(&v15, &ptr);
  sub_2F910((__int64)&ptr, (__int64)&v15, (__int64)"iy", &v12, &v13);
  v4 = v12;
  if ( v12 <= 1 )
  {
    if ( !v13 )
    {
      v13 = 1;
      *(_DWORD *)(a1 + 260) = 1;
      goto LABEL_26;
    }
    if ( v13 == 2 )
    {
      v10 = 4;
      v11 = 4;
    }
    else
    {
      v10 = 2;
      v11 = 2;
    }
    v6 = v15;
    v13 = v11;
    *(_DWORD *)(a1 + 260) = v10;
    if ( v6 )
      goto LABEL_8;
LABEL_11:
    if ( !*(_BYTE *)(a1 + 177) )
      sub_2F260((__int64)"obsolete database schema (%d); use --upgrade-schema to upgrade it", v4);
    v12 = sub_383F0(a1, a2, v4);
    if ( v12 != 2 )
    {
      if ( !unk_2439A0 )
        sub_198E10(2746);
      BUG();
    }
    goto LABEL_13;
  }
  if ( v12 != 2 )
    sub_2F260((__int64)"database schema %d is newer than expected %d", v12, 2);
  v5 = v13;
  if ( (unsigned int)(v13 - 1) > 1 && v13 != 4 )
    sub_2F260((__int64)"incorrect authorization mode %d in the database", v13);
  *(_DWORD *)(a1 + 260) = v13;
  if ( (v5 & 6) == 0 )
LABEL_26:
    sub_2F260(
      (__int64)"the server cannot work with the database because it does not support the '%s' authorization mode",
      "noauth");
  v6 = v15;
  if ( !v15 )
    goto LABEL_13;
LABEL_8:
  v7 = (*(_DWORD *)(v6 + 8))-- == 1;
  if ( v7 )
  {
    (**(void (__fastcall ***)(__int64))v6)(v6);
    v4 = v12;
  }
  if ( v4 != 2 )
    goto LABEL_11;
LABEL_13:
  v8 = (void (__fastcall ***)(_QWORD))v14;
  if ( v14 )
  {
    v7 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v7 )
      (**v8)(v8);
  }
  if ( ptr )
  {
    v17[0] = nullptr;
    j__free(ptr);
  }
  return *(_QWORD *)v19 - __readfsqword(0x28u);
}
