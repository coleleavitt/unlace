__int64 __fastcall sub_2FA90(__int64 a1, __int64 a2, const void *a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // rax
  const void *v14; // r14
  char *v15; // rdi
  size_t v16; // rax
  size_t v17; // r8
  const char *v18; // r8
  int v19; // r9d
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // [rsp+0h] [rbp-B0h]
  size_t v25; // [rsp+8h] [rbp-A8h]
  size_t v26; // [rsp+8h] [rbp-A8h]
  unsigned __int8 v27; // [rsp+1Fh] [rbp-91h]
  __int64 v28; // [rsp+28h] [rbp-88h] BYREF
  __int64 v29; // [rsp+30h] [rbp-80h] BYREF
  __int128 v30; // [rsp+38h] [rbp-78h]
  _QWORD v31[12]; // [rsp+50h] [rbp-60h] BYREF

  v31[5] = __readfsqword(0x28u);
  v29 = 0;
  v30 = 0;
  v27 = sub_1AE00(a1, &v29, a3, a4);
  if ( v27 )
  {
    v7 = v29;
    if ( a2 )
    {
      v8 = v29 + 48 * v30 - 48;
      if ( a2 != v8 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 > 1 )
        {
          v14 = *(const void **)v8;
          v15 = *(char **)a2;
          if ( *(_QWORD *)(a2 + 16) < v9 )
          {
            v22 = qvector_reserve();
            *(_QWORD *)a2 = v22;
            v15 = (char *)v22;
          }
          *(_QWORD *)(a2 + 8) = v9;
          memmove(v15, v14, v9 - 1);
          *(_BYTE *)(*(_QWORD *)a2 + v9 - 1) = 0;
          v7 = v29;
        }
        else
        {
          *(_QWORD *)(a2 + 8) = 0;
        }
      }
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(v8 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(v8 + 40);
    }
  }
  else
  {
    v27 = sub_2F7A0((_QWORD *)(a1 + 1040), (__int64)v31, (const char *)a3, a4);
    if ( v27 )
    {
      v27 = sub_2DB20((_QWORD *)(a1 + 1040), nullptr, nullptr, &v28, v31);
      if ( v27 )
      {
        if ( a2 )
        {
          if ( a3 && (v16 = strlen((const char *)a3), (v17 = v16) != 0) )
          {
            v20 = *(void **)a2;
            v21 = v16 + 1;
            if ( *(_QWORD *)(a2 + 16) < v16 + 1 )
            {
              v24 = v16;
              v26 = v16 + 1;
              v23 = qvector_reserve();
              *(_QWORD *)a2 = v23;
              v17 = v24;
              v20 = (void *)v23;
              v21 = v26;
            }
            *(_QWORD *)(a2 + 8) = v21;
            v25 = v17;
            memmove(v20, a3, v17);
            *(_BYTE *)(*(_QWORD *)a2 + v25) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 8) = 0;
          }
          *(_DWORD *)(a2 + 24) = a4;
          sub_2CA10((_QWORD *)(a1 + 1040), (__int64 *)(a2 + 32), v31);
          v18 = nptr;
          v19 = *(_DWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 40) = 2 * (v28 - v31[3]);
          if ( *(_QWORD *)(a2 + 8) )
            v18 = *(const char **)a2;
          sub_58110(a1, (unsigned int)"ea_source_ctx(%s:%d): %s:%d %a..%a\n", (_DWORD)a3, a4, (_DWORD)v18, v19);
        }
      }
    }
    v7 = v29;
  }
  if ( v7 )
  {
    v10 = v30;
    if ( (_QWORD)v30 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v7 + 48 * v11);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v7 = v29;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v27;
}

