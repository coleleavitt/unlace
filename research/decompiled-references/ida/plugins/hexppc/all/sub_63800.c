__int64 __fastcall sub_63800(__int64 a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  int v5; // r15d
  bool (__fastcall *v6)(__int64, int); // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v11; // eax
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]

  v1 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 128) = 0;
  v2 = *(__int64 (**)(void))(v1 + 56);
  if ( (char *)v2 == (char *)sub_61600 )
  {
    v3 = *(int *)(a1 + 56);
    if ( (int)v3 > 0 )
    {
LABEL_3:
      v12 = 0;
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
          if ( v6 != sub_61640 )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4 * v4) == -1 )
            goto LABEL_7;
LABEL_4:
          if ( ++v4 == v3 )
            goto LABEL_14;
        }
        if ( v6(a1, v4) )
        {
LABEL_7:
          if ( v5 < (int)v4 )
          {
            v7 = *(_QWORD *)(a1 + 128);
            do
            {
              v8 = *(_QWORD *)(a1 + 120);
              if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v7 + 1) )
              {
                v9 = qvector_reserve();
                v7 = *(_QWORD *)(a1 + 128);
                *(_QWORD *)(a1 + 120) = v9;
                v8 = v9;
              }
              *(_DWORD *)(v8 + 4 * v7) = v4;
              ++v5;
              v7 = *(_QWORD *)(a1 + 128) + 1LL;
              *(_QWORD *)(a1 + 128) = v7;
            }
            while ( v5 != (_DWORD)v4 );
          }
          ++v12;
          v5 = v4;
          goto LABEL_4;
        }
        if ( ++v4 == v3 )
          goto LABEL_14;
      }
    }
  }
  else
  {
    v11 = v2();
    v3 = v11;
    if ( v11 > 0 )
      goto LABEL_3;
  }
  v12 = 0;
LABEL_14:
  *(_DWORD *)(a1 + 144) = v12;
  return v12;
}

