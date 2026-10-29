__int64 __fastcall sub_64980(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // r12d
  __int64 v8; // rbx
  unsigned __int16 v9; // r13
  int v10; // eax
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int16 v15; // r10
  int v16; // r15d
  int v17; // r11d
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdi
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int16 v28; // cx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int16 v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+8h] [rbp-C0h]
  __int64 v35; // [rsp+8h] [rbp-C0h]
  __int64 v36; // [rsp+10h] [rbp-B8h]
  int v37; // [rsp+10h] [rbp-B8h]
  int v38; // [rsp+1Ch] [rbp-ACh]
  __int64 v39; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+30h] [rbp-98h] BYREF
  __int128 v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+50h] [rbp-78h] BYREF
  __int128 v43; // [rsp+58h] [rbp-70h]
  __int64 v44; // [rsp+70h] [rbp-58h] BYREF
  __int128 v45; // [rsp+78h] [rbp-50h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v3 = *a2;
  v46 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v3 + 56))(v3, a1 + 24);
  if ( !(_BYTE)v4 )
    return 0;
  v5 = v4;
  if ( (*(_BYTE *)(a1 + 94) & 1) == 0 )
    return v5;
  v7 = sub_55B00(*(_QWORD **)(a1 + 8), &v39, *(_DWORD *)(a1 + 64));
  if ( v7 )
    return 0;
  v8 = v39;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 280LL))(v39);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 288LL))(v8);
  v11 = v10;
  if ( v9 == 0xFFFF
    || v10 == -1
    || !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(**a2 + 40))(*a2, *(unsigned int *)(a1 + 96)) )
  {
    return 0;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v40 = 0;
  v41 = 0;
  v5 = sub_64570(v12, &v40, a2, v9, v11);
  if ( (_BYTE)v5 && (_QWORD)v41 )
  {
    v13 = v40;
    v42 = 0;
    v44 = 0;
    v14 = v40 + 16 * v41;
    v43 = 0;
    v45 = 0;
    if ( v14 == v40 )
    {
      v24 = v45;
      if ( (_QWORD)v45 )
      {
        v22 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      do
      {
        if ( *(_WORD *)(v13 + 4) == v9 && *(_DWORD *)v13 == v11 )
        {
          v15 = *(_WORD *)(v13 + 12);
          v16 = *(unsigned __int16 *)(v13 + 6);
          v17 = *(_DWORD *)(v13 + 8);
          if ( v15 == 4417 )
          {
            v29 = v43;
            if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
            {
              v37 = *(_DWORD *)(v13 + 8);
              v35 = v13;
              v33 = v14;
              v31 = qvector_reserve(&v42, v42, v43 + 1, 16);
              v17 = v37;
              v13 = v35;
              v42 = v31;
              v14 = v33;
              v29 = v43;
            }
            v30 = v42 + 16 * v29;
            *(_DWORD *)v30 = v11;
            *(_DWORD *)(v30 + 4) = v9 | (v16 << 16);
            *(_DWORD *)(v30 + 8) = v17;
            *(_WORD *)(v30 + 12) = 4417;
            *(_QWORD *)&v43 = v43 + 1;
          }
          else
          {
            v18 = v45;
            v19 = v44;
            if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
            {
              v38 = *(_DWORD *)(v13 + 8);
              v36 = v13;
              v34 = v14;
              v32 = *(_WORD *)(v13 + 12);
              v44 = qvector_reserve(&v44, v44, v45 + 1, 16);
              v19 = v44;
              v17 = v38;
              v18 = v45;
              v13 = v36;
              v14 = v34;
              v15 = v32;
            }
            v20 = v19 + 16 * v18;
            *(_DWORD *)v20 = v11;
            *(_DWORD *)(v20 + 4) = v9 | (v16 << 16);
            *(_DWORD *)(v20 + 8) = v17;
            *(_WORD *)(v20 + 12) = v15;
            *(_QWORD *)&v45 = v45 + 1;
          }
        }
        v13 += 16;
      }
      while ( v14 != v13 );
      if ( (_QWORD)v43 )
      {
        v21 = v42;
        v22 = v44;
        *(_WORD *)(a1 + 104) = *(_WORD *)(v42 + 6);
        v23 = *(_DWORD *)(v21 + 8);
LABEL_22:
        *(_DWORD *)(a1 + 100) = v23;
        *(_DWORD *)(a1 + 20) = 7;
        if ( v22 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v22);
        }
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        goto LABEL_26;
      }
      v24 = v45;
      v22 = v44;
      if ( (_QWORD)v45 )
      {
LABEL_29:
        v25 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 544LL);
        if ( v25 == 0xFFFF || (unsigned int)v25 - 3 <= 4 )
        {
          v7 = 22;
          goto LABEL_39;
        }
        if ( v25 == 208 )
        {
          v7 = 334;
          goto LABEL_39;
        }
        if ( v25 != 104 )
        {
          if ( v25 > 0x68u )
          {
            if ( v25 == 244 )
              goto LABEL_57;
          }
          else if ( (unsigned __int16)(v25 - 96) <= 6u )
          {
            goto LABEL_57;
          }
          if ( v25 != 103 && v25 != 240 )
          {
            if ( v25 == 246 )
              v7 = 79;
LABEL_39:
            v26 = v22;
            v27 = 0;
            while ( 1 )
            {
              v28 = *(_WORD *)(v26 + 6);
              if ( v28 == v7 )
                break;
              ++v27;
              v26 += 16;
              if ( v27 == v24 )
              {
                v28 = *(_WORD *)(v22 + 6);
                v26 = v22;
                break;
              }
            }
            *(_WORD *)(a1 + 104) = v28;
            v23 = *(_DWORD *)(v26 + 8);
            goto LABEL_22;
          }
        }
LABEL_57:
        v7 = 21;
        goto LABEL_39;
      }
      if ( v44 )
        qfree(v44);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
    if ( v40 )
    {
      v5 = 0;
      *(_QWORD *)&v41 = 0;
      qfree(v40);
      return v5;
    }
    return 0;
  }
LABEL_26:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  return v5;
}

