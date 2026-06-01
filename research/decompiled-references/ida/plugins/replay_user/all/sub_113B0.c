__int64 __fastcall sub_113B0(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 func; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  char v12; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v24 = __readfsqword(0x28u);
  func = get_func();
  v11 = *(_DWORD *)(a1 + 1032);
  v20 = func;
  if ( v11 >= 0 )
  {
    v12 = a3 & (func != 0);
    while ( v11 < (int)callui(1053, a2, v7, v8, v9, v10, v18, v20, v22, v23) )
    {
      a2 = (unsigned int)v11;
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64, __int64, __int64))callui)(
                              1054,
                              (unsigned int)v11,
                              &v22,
                              v14,
                              v15,
                              v16,
                              v19,
                              v21) )
      {
        a2 = v23;
        if ( v23 >= v4 )
        {
          if ( v12 )
          {
            if ( (int)get_func_chunknum() >= 0 )
              return v23;
          }
          else if ( !a3 )
          {
            return a2;
          }
        }
      }
      if ( v11-- == 0 )
        return -1;
    }
  }
  return -1;
}

