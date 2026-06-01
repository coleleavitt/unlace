unsigned __int64 __fastcall sub_565C0(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // r13d
  int i; // r15d
  unsigned int j; // r14d
  int v8; // eax
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rsi
  __int64 v12; // rdi
  void (*v13)(void); // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  int v17; // r15d
  unsigned int m; // r14d
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // esi
  _DWORD *v27; // rax
  int v28; // r13d
  _QWORD *v29; // r15
  _DWORD *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  _QWORD *v33; // r10
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // [rsp+8h] [rbp-B0h]
  unsigned int k; // [rsp+8h] [rbp-B0h]
  unsigned int v39; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v40; // [rsp+28h] [rbp-90h] BYREF
  int v41; // [rsp+2Ch] [rbp-8Ch] BYREF
  void *v42; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v43; // [rsp+38h] [rbp-80h] BYREF
  int v44; // [rsp+3Ch] [rbp-7Ch]
  __int64 v45; // [rsp+40h] [rbp-78h] BYREF
  __int128 v46; // [rsp+48h] [rbp-70h]
  unsigned __int64 v47; // [rsp+60h] [rbp-58h] BYREF
  __int128 v48; // [rsp+68h] [rbp-50h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(a1 + 608) + 24LL))(
    &v42,
    *(_QWORD *)(a1 + 608),
    *(unsigned __int16 *)a2);
  if ( !v42 )
    return v49 - __readfsqword(0x28u);
  if ( (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v42 + 24LL))(v42) )
  {
    v3 = a2[4];
    if ( v3 != -1 )
    {
      v4 = (unsigned int)(v3 >> 31);
      v5 = v3 / *(_DWORD *)(a1 + 532);
      if ( v5 )
      {
        if ( *(_DWORD *)(a1 + 628) - *(_DWORD *)(a1 + 624) == v5 )
        {
          LODWORD(v4) = v3 % *(_DWORD *)(a1 + 532);
          if ( (*(unsigned __int8 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v42 + 40LL))(v42, (int)a2[3], v4) )
          {
            if ( *(_DWORD *)(a1 + 532) == 4 )
              sub_562C0(a1, &v42, v5);
            else
              sub_56440(a1, &v42, v5);
            if ( (int)a2[8] > 0
              && (*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v42 + 40LL))(v42, (int)a2[7])
              && (*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v42 + 48LL))(
                   v42,
                   &v43,
                   8)
              && v44
              && 2 * v44 / 3u + 1 >= v43 )
            {
              v45 = 0;
              v46 = 0;
              if ( !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v42 + 48LL))(
                      v42,
                      &v40,
                      4) )
                goto LABEL_25;
              v37 = 0;
              for ( i = 0; v37 < v40; i += 32 )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(void *, int *, __int64))(*(_QWORD *)v42 + 48LL))(v42, &v41, 4) )
                  break;
                for ( j = 0; j != 32; ++j )
                {
                  v8 = v41;
                  if ( _bittest(&v8, j) )
                  {
                    v9 = v46;
                    v10 = i + j;
                    LODWORD(v47) = i + j;
                    v11 = v45;
                    if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
                    {
                      v45 = qvector_reserve(&v45, v45, v46 + 1, 4);
                      v11 = v45;
                      v10 = i + j;
                      v9 = v46;
                    }
                    *(_DWORD *)(v11 + 4 * v9) = v10;
                    *(_QWORD *)&v46 = v46 + 1;
                  }
                }
                ++v37;
              }
              if ( v43 != (_QWORD)v46 )
              {
LABEL_25:
                v12 = v45;
                if ( !v45 )
                  goto LABEL_27;
                goto LABEL_26;
              }
              v47 = 0;
              v48 = 0;
              if ( !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v42 + 48LL))(
                      v42,
                      &v39,
                      4) )
              {
                if ( v47 )
                {
                  *(_QWORD *)&v48 = 0;
                  qfree(v47);
                }
                goto LABEL_25;
              }
              v15 = v48;
              v41 = 0;
              v16 = 32 * v39;
              if ( v16 >= (unsigned __int64)v48 )
              {
                if ( (unsigned __int64)v48 >= v16 )
                  goto LABEL_45;
                if ( (unsigned __int64)&v41 < v47 || (unsigned __int64)&v41 >= v47 + 4LL * *((_QWORD *)&v48 + 1) )
                {
                  if ( *((_QWORD *)&v48 + 1) < v16 )
                  {
                    v47 = qvector_reserve(&v47, v47, 32 * v39, 4);
                    v15 = v48;
                  }
                  while ( v15 < v16 )
                    *(_DWORD *)(v47 + 4 * v15++) = 0;
                }
                else
                {
                  if ( *((_QWORD *)&v48 + 1) < v16 )
                  {
                    v47 = qvector_reserve(&v47, v47, 32 * v39, 4);
                    v15 = v48;
                  }
                  while ( v15 < v16 )
                    *(_DWORD *)(v47 + 4 * v15++) = 0;
                }
              }
              *(_QWORD *)&v48 = v16;
LABEL_45:
              v17 = 0;
              for ( k = 0; k < v39; v17 += 32 )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v42 + 48LL))(
                        v42,
                        &v40,
                        4) )
                  break;
                for ( m = 0; m != 32; ++m )
                {
                  v19 = v40;
                  if ( _bittest((const int *)&v19, m) )
                  {
                    v20 = v48;
                    v21 = m + v17;
                    v41 = m + v17;
                    v22 = v47;
                    if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 1) )
                    {
                      v47 = qvector_reserve(&v47, v47, v48 + 1, 4);
                      v22 = v47;
                      v21 = m + v17;
                      v20 = v48;
                    }
                    *(_DWORD *)(v22 + 4 * v20) = v21;
                    *(_QWORD *)&v48 = v48 + 1;
                  }
                }
                ++k;
              }
              v23 = v45;
              if ( !(4LL * (_QWORD)v46) )
              {
LABEL_69:
                if ( v47 )
                {
                  *(_QWORD *)&v48 = 0;
                  qfree(v47);
                }
                v12 = v45;
                if ( !v45 )
                  goto LABEL_27;
LABEL_26:
                *(_QWORD *)&v46 = 0;
                qfree(v12);
                goto LABEL_27;
              }
              while ( 1 )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v42 + 48LL))(
                        v42,
                        &v40,
                        4)
                  || !(*(unsigned __int8 (__fastcall **)(void *, int *, __int64))(*(_QWORD *)v42 + 48LL))(v42, &v41, 4) )
                {
                  goto LABEL_69;
                }
                if ( !*(_QWORD *)(a1 + 104) )
                  break;
                v32 = *(_QWORD *)(a1 + 88);
                v33 = *(_QWORD **)(*(_QWORD *)(a1 + 80) + 8 * (v40 % v32));
                if ( v33 )
                {
                  v34 = (_QWORD *)*v33;
                  if ( v40 != *(_DWORD *)(*v33 + 8LL) )
                  {
                    do
                    {
                      v35 = (_QWORD *)*v34;
                      if ( !*v34 )
                        goto LABEL_80;
                      v33 = v34;
                      if ( v40 % v32 != *((unsigned int *)v35 + 2) % v32 )
                        goto LABEL_80;
                      v34 = (_QWORD *)*v34;
                    }
                    while ( v40 != *((_DWORD *)v35 + 2) );
                  }
                  if ( v33 )
                  {
                    v24 = (__int64 *)*v33;
                    if ( *v33 )
                      goto LABEL_62;
                  }
                }
LABEL_80:
                sub_244A0();
LABEL_68:
                v23 += 4;
                if ( v23 == v45 + 4LL * (_QWORD)v46 )
                  goto LABEL_69;
              }
              v24 = *(__int64 **)(a1 + 96);
              if ( !v24 )
                goto LABEL_80;
              while ( v40 != *((_DWORD *)v24 + 2) )
              {
                v24 = (__int64 *)*v24;
                if ( !v24 )
                  goto LABEL_80;
              }
LABEL_62:
              v25 = sub_73B20(v24[2], (unsigned int)a2[2]);
              v26 = v25;
              if ( *(_DWORD *)(a1 + 532) != 4 )
                v26 = (unsigned __int16)v25;
              v27 = sub_55210((_QWORD *)(a1 + 416), v26);
              v28 = v41;
              v29 = v27;
              if ( v27 )
              {
                v30 = *((_DWORD **)v27 + 2);
                v31 = *((_QWORD *)v27 + 3);
                if ( v29[4] < (unsigned __int64)(v31 + 1) )
                {
                  v36 = qvector_reserve(v29 + 2, v30, v31 + 1, 4);
                  v29[2] = v36;
                  v30 = (_DWORD *)v36;
                  v31 = v29[3];
                }
                memmove(v30 + 1, v30, 4 * v31);
                *v30 = v28;
                ++v29[3];
                goto LABEL_68;
              }
              goto LABEL_80;
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( v42 )
  {
    v13 = *(void (**)(void))(*(_QWORD *)v42 + 8LL);
    if ( (char *)v13 == (char *)sub_54910 )
      operator delete(v42, 0x40u);
    else
      v13();
  }
  return v49 - __readfsqword(0x28u);
}

