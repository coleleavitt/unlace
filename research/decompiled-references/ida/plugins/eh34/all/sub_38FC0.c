__int64 __fastcall sub_38FC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r13
  int v6; // ebp
  bool (__fastcall *v7)(__int64, int); // rax
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-50h]
  unsigned int v14; // [rsp+1Ch] [rbp-3Ch]

  v1 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 128) = 0;
  v2 = *(__int64 (**)(void))(v1 + 56);
  if ( (char *)v2 == (char *)sub_B9F0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 > 0 )
    {
LABEL_3:
      v4 = v3;
      v5 = 0;
      v6 = 0;
      v14 = 0;
      v13 = v4;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
          if ( v7 != sub_BA30 )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4 * v5) == -1 )
            goto LABEL_7;
LABEL_4:
          if ( v13 == ++v5 )
            goto LABEL_14;
        }
        if ( v7(a1, v5) )
        {
LABEL_7:
          v8 = v6 + 1;
          if ( v6 < (int)v5 )
          {
            v9 = *(_QWORD *)(a1 + 128);
            do
            {
              v10 = *(_QWORD *)(a1 + 120);
              if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v9 + 1) )
              {
                v11 = qvector_reserve(a1 + 120, v10, v9 + 1, 4);
                v9 = *(_QWORD *)(a1 + 128);
                *(_QWORD *)(a1 + 120) = v11;
                v10 = v11;
              }
              *(_DWORD *)(v10 + 4 * v9) = v5;
              ++v8;
              v9 = *(_QWORD *)(a1 + 128) + 1LL;
              *(_QWORD *)(a1 + 128) = v9;
            }
            while ( v8 != (_DWORD)v5 + 1 );
          }
          ++v14;
          v6 = v5;
          goto LABEL_4;
        }
        if ( v13 == ++v5 )
          goto LABEL_14;
      }
    }
  }
  else
  {
    v3 = v2();
    if ( v3 > 0 )
      goto LABEL_3;
  }
  v14 = 0;
LABEL_14:
  *(_DWORD *)(a1 + 144) = v14;
  return v14;
}

