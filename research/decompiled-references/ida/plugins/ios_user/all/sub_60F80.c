__int64 __fastcall sub_60F80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  size_t v3; // r13
  _QWORD *v4; // rbp
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r15
  _WORD *v13; // r12
  __int64 (__fastcall *v14)(_QWORD *, void *, int); // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // r14d
  unsigned __int64 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v26; // rax
  const void *v27; // rsi
  int v28; // eax
  __int16 v29; // ax
  __int16 *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // [rsp+8h] [rbp-40h]

  v1 = operator new(0x88u);
  v2 = operator new(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_8CA48;
  *(_QWORD *)(v2 + 8) = 0;
  *(_OWORD *)(v2 + 16) = 0;
  if ( v3 )
  {
    v26 = (void *)qalloc_or_throw();
    v4[1] = v26;
    v27 = *(const void **)a1;
    v4[3] = v3;
    memcpy(v26, v27, v3);
    v4[2] = v3;
  }
  v4[4] = 0;
  *(_QWORD *)v1 = &off_8C108;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = 0x100000001LL;
  *(_OWORD *)(v1 + 32) = 0;
  v5 = (_BYTE *)operator new[](1u);
  *(_QWORD *)(v1 + 48) = v5;
  *v5 = 0;
  *(_QWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 72) = 0x100000001LL;
  v6 = (_BYTE *)operator new[](1u);
  *(_QWORD *)(v1 + 64) = v6;
  *v6 = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_WORD *)(v1 + 104) = 257;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_WORD *)(v1 + 128) = 257;
  if ( v4 )
  {
    v7 = *v4;
    *(_DWORD *)(v1 + 44) = 1;
    v8 = *(__int64 (__fastcall **)(__int64))(v7 + 24);
    if ( v8 == sub_60B20 )
      v9 = *((int *)v4 + 4);
    else
      v9 = (int)v8((__int64)v4);
    v10 = v9 + 4;
    v11 = operator new[]((int)v9 + 4);
    v12 = *v4;
    v13 = (_WORD *)v11;
    v14 = *(__int64 (__fastcall **)(_QWORD *, void *, int))(*v4 + 16LL);
    if ( v14 == sub_60B30 )
    {
      if ( (int)v9 < 0 )
        goto LABEL_24;
      v15 = v4[4];
      v16 = (int)v9 + v15;
      if ( __CFADD__((int)v9, v15) )
        goto LABEL_24;
      v17 = v4[2];
      if ( v17 >= v16 )
      {
        if ( !(_DWORD)v9 )
        {
LABEL_24:
          if ( v13 )
            operator delete[](v13);
          v12 = *v4;
          goto LABEL_27;
        }
        v18 = (int)v9;
        goto LABEL_12;
      }
      v28 = v17 - v15;
      v18 = v28;
      v16 = v15 + v28;
      if ( v28 > 0 )
      {
LABEL_12:
        v37 = v16;
        memcpy(v13, (const void *)(v4[1] + v15), v18);
        *((_BYTE *)v13 + (int)v9 + 3) = 0;
        v4[4] = v37;
        *((_BYTE *)v13 + (int)v9 + 2) = 0;
        *((_BYTE *)v13 + (int)v9 + 1) = 0;
        *((_BYTE *)v13 + (int)v9) = 0;
        if ( v10 <= 3 )
        {
LABEL_18:
          *(_QWORD *)(v1 + 24) = v13;
          *(_QWORD *)(v1 + 8) = v13;
          *(_DWORD *)(v1 + 32) = v10;
LABEL_27:
          (*(void (__fastcall **)(_QWORD *))(v12 + 8))(v4);
          sub_3A600(v1);
          *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 24);
          return v1;
        }
        goto LABEL_13;
      }
      v4[4] = v16;
    }
    else
    {
      v28 = v14(v4, v13, v9);
    }
    if ( !v28 )
      goto LABEL_24;
    *((_BYTE *)v13 + (int)v9 + 3) = 0;
    *((_BYTE *)v13 + (int)v9 + 2) = 0;
    *((_BYTE *)v13 + (int)v9 + 1) = 0;
    *((_BYTE *)v13 + v9) = 0;
    if ( v10 <= 3 )
    {
      if ( v10 <= 1 )
        goto LABEL_17;
LABEL_15:
      if ( *v13 == 0xFFFE )
      {
        v29 = v13[1];
        *(_DWORD *)(v1 + 40) = 2;
        v20 = v10 >> 1;
        v30 = v13 + 1;
        if ( v29 )
        {
          do
          {
            *v30++ = __ROL2__(v29, 8);
            v29 = *v30;
          }
          while ( *v30 );
        }
        v22 = operator new[](v20);
        *(_QWORD *)(v1 + 8) = v22;
        v31 = 1;
        do
        {
          *(_BYTE *)(v22 + v31 - 1) = v13[v31];
          v32 = v31++;
        }
        while ( v20 != v32 );
      }
      else
      {
        if ( *v13 != 0xFEFF )
        {
LABEL_17:
          v12 = *v4;
          goto LABEL_18;
        }
        v20 = v10 >> 1;
        *(_DWORD *)(v1 + 40) = 3;
        v22 = operator new[](v20);
        *(_QWORD *)(v1 + 8) = v22;
        v35 = 1;
        do
        {
          *(_BYTE *)(v22 + v35 - 1) = v13[v35];
          v36 = v35++;
        }
        while ( v20 != v36 );
      }
      goto LABEL_23;
    }
LABEL_13:
    if ( *(_QWORD *)v13 == -131072 )
    {
      v19 = *((_QWORD *)v13 + 1);
      *(_DWORD *)(v1 + 40) = 4;
      v20 = v10 >> 2;
      v21 = (unsigned __int64 *)(v13 + 4);
      if ( v19 )
      {
        do
        {
          *v21++ = (v19 >> 8) | (v19 << 8);
          v19 = *v21;
        }
        while ( *v21 );
      }
      v22 = operator new[](v20);
      *(_QWORD *)(v1 + 8) = v22;
      v23 = 1;
      do
      {
        *(_BYTE *)(v22 + v23 - 1) = *(_QWORD *)&v13[4 * v23];
        v24 = v23++;
      }
      while ( v20 != v24 );
    }
    else
    {
      if ( *(_QWORD *)v13 != 65279 )
        goto LABEL_15;
      v20 = v10 >> 2;
      *(_DWORD *)(v1 + 40) = 5;
      v22 = operator new[](v20);
      *(_QWORD *)(v1 + 8) = v22;
      v33 = 1;
      do
      {
        *(_BYTE *)(v22 + v33 - 1) = *(_QWORD *)&v13[4 * v33];
        v34 = v33++;
      }
      while ( v20 != v34 );
    }
LABEL_23:
    *(_QWORD *)(v1 + 24) = v22;
    *(_DWORD *)(v1 + 32) = v20;
    goto LABEL_24;
  }
  return v1;
}

