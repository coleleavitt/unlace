__int64 __fastcall sub_10FF0(int a1, __int64 a2)
{
  __int64 v4; // rax
  char **v5; // rdx
  __int16 v6; // [rsp+Eh] [rbp-5Ah] BYREF
  char *v7; // [rsp+10h] [rbp-58h] BYREF
  __int128 v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a1 == 4 && byte_7FAF0 )
  {
    v7 = nullptr;
    v8 = 0;
    v7 = (char *)qvector_reserve();
    *(_QWORD *)&v8 = 5;
    strcpy(v7, "true");
    v9 = 0;
    v10 = 0;
    v4 = qvector_reserve();
    v9 = v4;
    *(_QWORD *)&v10 = 6;
    *(_DWORD *)v4 = 1936482662;
    *(_BYTE *)(v4 + 4) = 101;
    *(_BYTE *)(v9 + 5) = 0;
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 5, &qword_7FAA0);
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, 6, &qword_7FAB8);
    v5 = &v7;
    if ( !byte_7FAE8 )
      v5 = (char **)&v9;
    (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)a2 + 8LL))(a2, 8, v5);
    v6 = 1;
    byte_7FB4D = byte_7FAE8;
    (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 11, &v6);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  return 1;
}

