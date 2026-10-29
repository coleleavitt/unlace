__int64 __fastcall sub_2BE060(__int64 a1, double a2, __int64 a3, char a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  _UNKNOWN **v16; // rbp
  _UNKNOWN **v17; // r13
  _UNKNOWN **v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rdi
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 module_data; // rax
  __int64 v34; // [rsp+8h] [rbp-B0h]
  unsigned int v35; // [rsp+10h] [rbp-A8h]
  unsigned int v36; // [rsp+14h] [rbp-A4h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  __int64 v38[2]; // [rsp+20h] [rbp-98h] BYREF
  char v39; // [rsp+30h] [rbp-88h]
  _UNKNOWN ***v40; // [rsp+38h] [rbp-80h]
  _UNKNOWN **v41; // [rsp+40h] [rbp-78h] BYREF
  __int128 v42; // [rsp+48h] [rbp-70h]
  __int64 *v43; // [rsp+58h] [rbp-60h] BYREF
  __int128 v44; // [rsp+60h] [rbp-58h]
  int v45; // [rsp+70h] [rbp-48h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  switch ( a4 )
  {
    case 'g':
      switch_dbctx();
      v23 = *(_QWORD *)(a1 + 48);
      v24 = *(_DWORD *)(a1 + 40);
      v25 = *(_DWORD *)(a1 + 44);
      v26 = *(_QWORD *)(a1 + 32);
      v27 = *(_QWORD *)(a1 + 56);
      if ( !v23 )
      {
        v37 = *(_QWORD *)(a1 + 56);
        v36 = *(_DWORD *)(a1 + 40);
        v35 = *(_DWORD *)(a1 + 44);
        v34 = *(_QWORD *)(a1 + 32);
        switch_dbctx();
        module_data = get_module_data();
        v27 = v37;
        v24 = v36;
        *(_QWORD *)(a1 + 48) = module_data;
        v25 = v35;
        v23 = module_data;
        v26 = v34;
      }
      sub_2BDD50(v23, a6, v27, v26, v25, v24);
      break;
    case 'v':
      switch_dbctx();
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(_QWORD *)(a1 + 48);
      v41 = nullptr;
      v38[1] = v14;
      v43 = nullptr;
      v45 = 1;
      v39 = 118;
      v38[0] = (__int64)&off_4AD9B8;
      v40 = &v41;
      v42 = 0;
      v44 = 0;
      if ( !v15 )
      {
        switch_dbctx();
        v32 = get_module_data();
        *(_QWORD *)(a1 + 48) = v32;
        v15 = v32;
      }
      if ( sub_2AEFB0(v38, v15, a6, 0.0) )
      {
        v16 = v41;
        v17 = &v41[12 * v42];
        if ( v17 != v41 )
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, _UNKNOWN **, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
              *(_QWORD *)(a1 + 32),
              v16 + 6,
              *(unsigned int *)(a1 + 44),
              *(unsigned int *)(a1 + 40),
              1);
            v16 += 12;
          }
          while ( v16 != v17 );
        }
        sub_2AF130(v38, a6);
      }
      sub_2107E0((__int64 *)&v43);
      v18 = v41;
      if ( v41 )
      {
        v19 = v42;
        if ( (_QWORD)v42 )
        {
          v20 = 0;
          do
          {
            v21 = 3 * v20++;
            sub_2B2600(&v18[4 * v21]);
            v18 = v41;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v42 = 0;
        qfree();
      }
      break;
    case 'd':
      switch_dbctx();
      v8 = *(_QWORD *)(a1 + 56);
      v9 = *(_QWORD *)(a1 + 48);
      BYTE8(v42) = 100;
      v43 = nullptr;
      *(_QWORD *)&v42 = v8;
      v41 = &off_4AD918;
      if ( !v9 )
      {
        switch_dbctx();
        v31 = get_module_data();
        *(_QWORD *)(a1 + 48) = v31;
        v9 = v31;
      }
      v10 = (__int64 *)sub_2AEFB0(&v41, v9, a6, a2);
      v43 = v10;
      if ( v10 )
      {
        v11 = *v10;
        if ( *v10 && v10[1] )
        {
          v12 = *(_QWORD **)(v11 + 8);
LABEL_10:
          while ( (_QWORD *)v11 != v12 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
              *(_QWORD *)(a1 + 32),
              v12 + 7,
              *(unsigned int *)(a1 + 44),
              *(unsigned int *)(a1 + 40),
              1);
            if ( (*v12 & 2) == 0 )
            {
              v13 = (_QWORD *)v12[2];
              if ( (*(_BYTE *)v13 & 2) != 0 )
              {
                v28 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
                v29 = *v28;
                if ( (*v28 & 2) == 0 )
                {
                  while ( v12 == (_QWORD *)v28[2] )
                  {
                    v12 = v28;
                    v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
                    v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v29 & 2) != 0 )
                    {
                      v12 = (_QWORD *)v30;
                      goto LABEL_10;
                    }
                    v28 = (_QWORD *)v30;
                  }
                }
                v12 = v28;
              }
              else
              {
                do
                {
                  v12 = v13;
                  v13 = (_QWORD *)v13[1];
                }
                while ( (*(_BYTE *)v13 & 2) == 0 );
              }
            }
          }
        }
        sub_2AF130((__int64 *)&v41, a6);
        if ( v43 )
        {
          sub_2B51E0(v43);
          qfree();
        }
      }
      break;
  }
  return 1;
}

