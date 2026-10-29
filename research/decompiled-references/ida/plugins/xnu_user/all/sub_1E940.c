__int64 __fastcall sub_1E940(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, unsigned __int64))
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  unsigned int v12; // [rsp+Ch] [rbp-5Ch]
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  char v14[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-44h]
  int v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+38h] [rbp-30h]
  unsigned __int64 v19; // [rsp+48h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1928);
  if ( v3 == -1 )
    return 0xFFFFFFFFLL;
  v4 = *(int *)(a1 + 1176);
  v13 = 0;
  v5 = *(int *)(qword_9AD30 + 144 * v4 + 128);
  if ( v5 != (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
               a1,
               v3,
               &v13,
               v5,
               0)
    || (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         v13,
         v14,
         16,
         0) != 16
    || v15 <= 0x77 )
  {
    return 0xFFFFFFFFLL;
  }
  result = 0;
  if ( v16 )
  {
    v17 = 0;
    v7 = 0;
    v8 = v16 * v15;
    v18 = 0;
    if ( v16 * v15 )
    {
      v17 = qvector_reserve();
      memset((void *)(v17 + v18), 0, v8 - v18);
      *(_QWORD *)&v18 = v8;
      v7 = v17;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           v13 + 16,
           v7,
           v8,
           0);
    v10 = v17;
    if ( v9 == v8 )
    {
      v11 = v17 + v18;
      if ( v17 < v17 + (unsigned __int64)v18 )
      {
        do
        {
          result = (**a2)(a2, v10);
          if ( (_DWORD)result )
            break;
          v10 += v15;
        }
        while ( v10 < v11 );
        v10 = v17;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0xFFFFFFFFLL;
    }
    if ( v10 )
    {
      v12 = result;
      *(_QWORD *)&v18 = 0;
      qfree();
      return v12;
    }
  }
  return result;
}

