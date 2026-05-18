__int64 __fastcall sub_46F60(__int64 a1, void (***a2)())
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  void (*v5)(); // rax
  time_t v6; // rax
  time_t v7; // rdx
  int v8; // edi
  time_t v9; // rdx
  void (**v10)(); // rax
  unsigned __int64 (__fastcall *v11)(__int64, __int64, __int64); // rax
  void (*v12)(); // rax
  void *v14; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+8h] [rbp-90h]
  int v16; // [rsp+20h] [rbp-78h] BYREF
  __int16 v17; // [rsp+24h] [rbp-74h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  void *ptr; // [rsp+48h] [rbp-50h]
  __int128 v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+68h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v2 = sub_2FCC0();
  if ( !v2 )
    sub_2F260((__int64)"Failed to get the license manager");
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 88LL))(v2, 0, 0);
  if ( !v4 )
    sub_2F260((__int64)"License not found");
  v5 = **a2;
  if ( v5 != nullsub_1 )
    ((void (__fastcall *)(void (***)(), __int64))v5)(a2, v4);
  v6 = time(nullptr);
  v7 = *(_QWORD *)(v4 + 104);
  if ( v7 == -1 || (v8 = 0, v6 >= v7) )
  {
    v9 = *(_QWORD *)(v4 + 112);
    v8 = 1;
    if ( v9 )
    {
      if ( v6 >= v9 - 2592000 )
      {
        v8 = 2;
        if ( v6 >= v9 - 1296000 )
        {
          v8 = 3;
          if ( v6 >= v9 )
          {
            v8 = 4;
            if ( v6 >= v9 + 1296000 )
              v8 = (v6 >= v9 + 2592000) + 5;
          }
        }
      }
    }
  }
  sub_467B0(v8);
  v10 = *a2;
  v15 = 0;
  v11 = (unsigned __int64 (__fastcall *)(__int64, __int64, __int64))v10[1];
  v14 = nullptr;
  if ( v11 == sub_46F50 )
    sub_46920((__int64)&v14, v4);
  else
    v11((__int64)a2, (__int64)&v14, v4);
  ptr = nullptr;
  v20 = 0;
  v16 = *(_DWORD *)v4;
  v17 = *(_WORD *)(v4 + 4);
  v18 = *(_QWORD *)(v4 + 112);
  v12 = (*a2)[2];
  if ( v12 != nullsub_2 )
  {
    ((void (__fastcall *)(void (***)(), int *, __int64, __int64, void **))v12)(a2, &v16, v3 + 152, v3 + 176, &v14);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      j__free(ptr);
    }
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    j__free(v14);
  }
  return v4;
}
