unsigned __int64 __fastcall sub_134880(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v6; // ebp
  int v7; // ebx
  int v8; // r8d
  __int64 (*v9)(); // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  int *v13; // rax
  int v14; // eax
  char v15; // al
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-3Ch]
  int v18; // [rsp+Ch] [rbp-3Ch]

  a2[1] = 0;
  result = sub_60760((_QWORD *)a3, 0);
  if ( (_DWORD)result != *(_DWORD *)(a3 + 8) )
  {
    v6 = result;
    do
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v6);
      if ( (int)v6 > 7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v6, (unsigned int)v7);
        if ( v8 >= 0 )
        {
          v9 = *(__int64 (**)())(*(_QWORD *)a1 + 192LL);
          if ( v9 == sub_1300E0
            || (v17 = v8, v15 = ((__int64 (__fastcall *)(__int64, _QWORD))v9)(a1, v6), v8 = v17, !v15) )
          {
            v10 = a2[1];
            v11 = *a2;
            v12 = v10 + 1;
            if ( a2[2] < (unsigned __int64)(v10 + 1) )
            {
              v18 = v8;
              v16 = qvector_reserve();
              v10 = a2[1];
              v8 = v18;
              *a2 = v16;
              v11 = v16;
              v12 = v10 + 1;
            }
            v13 = (int *)(v11 + 8 * v10);
            a2[1] = v12;
            *v13 = v8;
            v13[1] = v7;
          }
        }
      }
      v14 = sub_609A0((_QWORD *)a3, v6);
      if ( v7 <= v14 )
        v14 = v7;
      result = sub_60760((_QWORD *)a3, v6 + v14);
      v6 = result;
    }
    while ( (_DWORD)result != *(_DWORD *)(a3 + 8) );
  }
  return result;
}

