void __fastcall sub_B580(__int64 a1, int *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // r12
  int v4; // r14d
  _QWORD *v5; // rbx
  size_t (__fastcall *v6)(__int64, void *, int); // rax
  FILE *v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int16 v21; // ax
  __int16 *v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  __int16 v29; // ax
  __int16 *v30; // rdx

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v2 == sub_AFF0 )
    v3 = a2[4];
  else
    v3 = (int)v2((__int64)a2);
  v4 = v3 + 4;
  v5 = (_QWORD *)operator new[]((int)v3 + 4);
  v6 = *(size_t (__fastcall **)(__int64, void *, int))(*(_QWORD *)a2 + 16LL);
  if ( v6 == sub_B0D0 )
  {
    v7 = *((FILE **)a2 + 1);
    if ( !v7 )
      goto LABEL_17;
    v8 = fread(v5, 1u, (int)v3, v7);
  }
  else
  {
    v8 = v6((__int64)a2, v5, v3);
  }
  if ( v8 )
  {
    *((_BYTE *)v5 + (int)v3 + 3) = 0;
    *((_BYTE *)v5 + (int)v3 + 2) = 0;
    *((_BYTE *)v5 + (int)v3 + 1) = 0;
    *((_BYTE *)v5 + v3) = 0;
    if ( v4 <= 3 )
    {
      if ( v4 <= 1 )
        goto LABEL_20;
    }
    else
    {
      if ( *v5 == -131072 )
      {
        v14 = *(unsigned int *)(a1 + 44);
        *(_DWORD *)(a1 + 40) = 4;
        v10 = v4 >> 2;
        if ( (unsigned int)v14 <= 5 )
        {
          v15 = 43;
          if ( _bittest64(&v15, v14) )
          {
            v16 = v5[1];
            v17 = v5 + 1;
            if ( v16 )
            {
              do
              {
                *v17++ = (v16 >> 8) | (v16 << 8);
                v16 = *v17;
              }
              while ( *v17 );
            }
          }
        }
        v12 = operator new[](v10);
        v18 = 0;
        *(_QWORD *)(a1 + 8) = v12;
        do
        {
          *(_BYTE *)(v12 + v18) = v5[v18 + 1];
          ++v18;
          v12 = *(_QWORD *)(a1 + 8);
        }
        while ( v18 != v10 );
        goto LABEL_16;
      }
      if ( *v5 == 65279 )
      {
        v24 = *(unsigned int *)(a1 + 44);
        *(_DWORD *)(a1 + 40) = 5;
        v10 = v4 >> 2;
        if ( (unsigned int)v24 > 5 || (v25 = 43, !_bittest64(&v25, v24)) )
        {
          v27 = v5[1];
          v28 = v5 + 1;
          if ( v27 )
          {
            do
            {
              *v28++ = (v27 >> 8) | (v27 << 8);
              v27 = *v28;
            }
            while ( *v28 );
          }
        }
        v12 = operator new[](v10);
        v26 = 0;
        *(_QWORD *)(a1 + 8) = v12;
        do
        {
          *(_BYTE *)(v12 + v26) = v5[v26 + 1];
          ++v26;
          v12 = *(_QWORD *)(a1 + 8);
        }
        while ( v26 != v10 );
        goto LABEL_16;
      }
    }
    if ( *(_WORD *)v5 == 0xFFFE )
    {
      v19 = *(unsigned int *)(a1 + 44);
      *(_DWORD *)(a1 + 40) = 2;
      v10 = v4 >> 1;
      if ( (unsigned int)v19 <= 5 )
      {
        v20 = 43;
        if ( _bittest64(&v20, v19) )
        {
          v21 = *((_WORD *)v5 + 1);
          v22 = (__int16 *)v5 + 1;
          if ( v21 )
          {
            do
            {
              *v22++ = __ROL2__(v21, 8);
              v21 = *v22;
            }
            while ( *v22 );
          }
        }
      }
      v12 = operator new[](v10);
      v23 = 0;
      *(_QWORD *)(a1 + 8) = v12;
      do
      {
        *(_BYTE *)(v12 + v23) = *((_WORD *)v5 + v23 + 1);
        ++v23;
        v12 = *(_QWORD *)(a1 + 8);
      }
      while ( v23 != v10 );
      goto LABEL_16;
    }
    if ( *(_WORD *)v5 == 0xFEFF )
    {
      v9 = *(unsigned int *)(a1 + 44);
      *(_DWORD *)(a1 + 40) = 3;
      v10 = v4 >> 1;
      if ( (unsigned int)v9 > 5 || (v11 = 43, !_bittest64(&v11, v9)) )
      {
        v29 = *((_WORD *)v5 + 1);
        v30 = (__int16 *)v5 + 1;
        if ( v29 )
        {
          do
          {
            *v30++ = __ROL2__(v29, 8);
            v29 = *v30;
          }
          while ( *v30 );
        }
      }
      v12 = operator new[](v10);
      v13 = 0;
      *(_QWORD *)(a1 + 8) = v12;
      do
      {
        *(_BYTE *)(v12 + v13) = *((_WORD *)v5 + v13 + 1);
        ++v13;
        v12 = *(_QWORD *)(a1 + 8);
      }
      while ( v13 != v10 );
LABEL_16:
      *(_QWORD *)(a1 + 24) = v12;
      *(_DWORD *)(a1 + 32) = v10;
      goto LABEL_17;
    }
LABEL_20:
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 32) = v4;
    return;
  }
LABEL_17:
  if ( v5 )
    operator delete[](v5);
}

