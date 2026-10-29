__int64 __fastcall sub_30020(__int64 *a1, char a2, const char *a3)
{
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  const char *v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r14
  char v16; // cl
  char byte; // al
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-50h]

  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v22 = 0;
  for ( i = get_first_seg(); i; i = get_next_seg() )
  {
    v5 = operator new(0x78u);
    v6 = *a1;
    *(_QWORD *)v5 = 0;
    v7 = v5;
    *(_QWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 72) = 0;
    *(_QWORD *)(v5 + 96) = 0;
    *(_QWORD *)(v5 + 104) = 0;
    *(_DWORD *)(v5 + 112) = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_OWORD *)(v5 + 24) = 0;
    *(_OWORD *)(v5 + 56) = 0;
    *(_OWORD *)(v5 + 80) = 0;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(i + 8) - *(_QWORD *)i;
    *(_BYTE *)(v5 + 105) = *(_BYTE *)(i + 42);
    *(_QWORD *)(v5 + 40) = *(_QWORD *)(i + 8);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)i;
    *(_BYTE *)(v5 + 104) = *(_BYTE *)(i + 43);
    v8 = a1[1];
    if ( a1[2] < (unsigned __int64)(v8 + 1) )
    {
      v19 = qvector_reserve();
      *a1 = v19;
      v6 = v19;
      v8 = a1[1];
    }
    *(_QWORD *)(v6 + 8 * v8) = v7;
    ++a1[1];
    v22 = *(_QWORD *)(i + 8) + v22 - *(_QWORD *)i;
    get_segm_name();
    get_segm_class();
    v9 = s1;
    if ( *(_QWORD *)(v7 + 80) )
      v9 = *(const char **)(v7 + 72);
    if ( !strcasecmp(v9, a3) )
      *(_DWORD *)(v7 + 112) |= 2u;
    if ( a2 )
    {
      if ( *(_BYTE *)(i + 184) == 9 )
      {
        *(_DWORD *)(v7 + 112) |= 1u;
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 24);
        v11 = *(_QWORD *)(v7 + 8);
        if ( v11 < v10 )
        {
          v20 = *(_QWORD *)v7;
          if ( *(_QWORD *)(v7 + 16) < v10 )
          {
            v21 = qvector_reserve();
            v11 = *(_QWORD *)(v7 + 8);
            *(_QWORD *)v7 = v21;
            v20 = v21;
          }
          memset((void *)(v20 + v11), 0, v10 - v11);
          *(_QWORD *)(v7 + 8) = v10;
          v10 = *(_QWORD *)(v7 + 24);
        }
        else if ( v10 != v11 )
        {
          *(_QWORD *)(v7 + 8) = v10;
        }
        v12 = *(_QWORD *)v7;
        v13 = *(_QWORD *)(v7 + 32);
        v14 = v13 + v10;
        if ( v13 < v14 )
        {
          v15 = v13;
          do
          {
            v16 = is_loaded();
            byte = 0;
            if ( v16 )
              byte = get_byte();
            *(_BYTE *)(v12 - v13 + v15++) = byte;
          }
          while ( v15 < v14 );
        }
      }
    }
  }
  return v22;
}

