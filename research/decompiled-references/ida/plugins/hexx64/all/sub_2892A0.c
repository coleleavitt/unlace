__int64 __fastcall sub_2892A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // r13
  int v7; // r14d
  int v8; // eax
  unsigned int v9; // eax
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 i; // rax
  __int64 v13; // r14
  __int64 *v14; // r12
  _QWORD *v15; // rdi
  int v16; // r13d
  __int64 j; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // r14
  _QWORD *v25; // r12
  __int64 v26; // r13
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // edi
  int v31; // edi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 *v40; // rax
  int v41; // ecx
  __int64 v42; // rcx
  int v43; // esi
  bool v44; // al
  __int64 *v45; // r12
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // [rsp+8h] [rbp-80h]
  __int64 v62; // [rsp+8h] [rbp-80h]
  int v63; // [rsp+14h] [rbp-74h]
  unsigned int v64; // [rsp+18h] [rbp-70h]
  char v65; // [rsp+1Fh] [rbp-69h]
  __int64 v66; // [rsp+20h] [rbp-68h] BYREF
  __int64 v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+38h] [rbp-50h]
  unsigned __int64 v70; // [rsp+48h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v3 = 0;
  if ( *(_DWORD *)(a2 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(0xC5B8u, a3);
LABEL_74:
    BUG();
  }
  v4 = *(__int64 **)(a2 + 24);
  v5 = (__int64 *)*v4;
  if ( (__int64 *)*v4 == v4 )
    return 0;
  v65 = 0;
  v64 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)v5 + 6) )
    {
      case 'G':
        v61 = (_QWORD *)v5[5];
        v63 = *((_DWORD *)v5 + 7);
        v23 = *(unsigned int *)(*v61 + 28LL);
        if ( v63 == -1 )
        {
          *(_DWORD *)(*v61 + 28LL) = -1;
          v63 = v23;
        }
        else
        {
          if ( (_DWORD)v23 != -1 )
            goto LABEL_17;
          *((_DWORD *)v5 + 7) = -1;
        }
        if ( v63 == -2 )
          goto LABEL_17;
        v24 = (__int64)v5;
        v25 = v61;
        if ( (_QWORD *)*v25 != v25 )
        {
          do
          {
            v26 = v24;
            v66 = -1;
            v67 = -4294967226LL;
            v68 = 0xFFFFFFFFLL;
            v69 = 0;
            v24 = qalloc_or_throw(48, a2, v3, v23);
            *(_QWORD *)(v24 + 16) = -1;
            *(_DWORD *)(v24 + 24) = 70;
            *(_QWORD *)(v24 + 28) = -1;
            sub_25AA70(v24 + 16, (__int64)&v66, a3);
            *(_QWORD *)v24 = v26;
            v27 = *(__int64 **)(v26 + 8);
            *(_QWORD *)(v24 + 8) = v27;
            *v27 = v24;
            *(_QWORD *)(v26 + 8) = v24;
            ++v4[2];
            sub_255050((__int64)&v66, a3);
            v28 = v25[1];
            v29 = *(_QWORD *)(v24 + 16);
            *(_QWORD *)(v24 + 16) = *(_QWORD *)(v28 + 16);
            v30 = *(_DWORD *)(v28 + 24);
            *(_QWORD *)(v28 + 16) = v29;
            LODWORD(v29) = *(_DWORD *)(v24 + 24);
            *(_DWORD *)(v24 + 24) = v30;
            v31 = *(_DWORD *)(v28 + 28);
            *(_DWORD *)(v28 + 24) = v29;
            LODWORD(v29) = *(_DWORD *)(v24 + 28);
            *(_DWORD *)(v24 + 28) = v31;
            v32 = *(_QWORD *)(v28 + 40);
            *(_DWORD *)(v28 + 28) = v29;
            a2 = *(_QWORD *)(v24 + 40);
            *(_QWORD *)(v24 + 40) = v32;
            *(_QWORD *)(v28 + 40) = a2;
            v25 = (_QWORD *)v25[1];
          }
          while ( v25 != (_QWORD *)*v61 );
        }
        *(_DWORD *)(v24 + 28) = v63;
        v33 = *v5;
        *(_QWORD *)v5[1] = *v5;
        a2 = v5[1];
        *(_QWORD *)(v33 + 8) = a2;
        sub_255050((__int64)(v5 + 2), a3);
        v34 = (__int64)v5;
        v5 = (__int64 *)v24;
        qfree(v34);
        --v4[2];
        ++v64;
        goto LABEL_18;
      case 'H':
      case 'I':
      case 'M':
      case 'P':
      case 'T':
        v6 = v5[5];
        v7 = *((_DWORD *)v5 + 7);
        v8 = *(_DWORD *)(v6 + 12);
        if ( v7 == -1 )
        {
          *(_DWORD *)(v6 + 12) = -1;
          v7 = v8;
        }
        else
        {
          if ( v8 != -1 )
            goto LABEL_17;
          *((_DWORD *)v5 + 7) = -1;
        }
        if ( v7 == -2 )
          goto LABEL_17;
        v9 = *(_DWORD *)(v6 + 8);
        if ( v9 == 48 )
        {
          a2 = *(_QWORD *)(v6 + 24);
          if ( *(_DWORD *)(a2 + 8) == 1 )
          {
            v47 = *(_QWORD *)v6;
            *(_QWORD *)v6 = *(_QWORD *)a2;
            v48 = *(_DWORD *)(a2 + 8);
            *(_QWORD *)a2 = v47;
            LODWORD(v47) = *(_DWORD *)(v6 + 8);
            *(_DWORD *)(v6 + 8) = v48;
            v49 = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 8) = v47;
            LODWORD(v47) = *(_DWORD *)(v6 + 12);
            *(_DWORD *)(v6 + 12) = v49;
            v50 = *(_QWORD *)(a2 + 24);
            *(_DWORD *)(a2 + 12) = v47;
            v51 = *(_QWORD *)(v6 + 24);
            *(_QWORD *)(v6 + 24) = v50;
            v52 = *(_QWORD *)(a2 + 32);
            *(_QWORD *)(a2 + 24) = v51;
            v53 = *(_QWORD *)(v6 + 32);
            *(_QWORD *)(v6 + 32) = v52;
            v54 = *(_QWORD *)(a2 + 40);
            *(_QWORD *)(a2 + 32) = v53;
            v55 = *(_QWORD *)(v6 + 40);
            *(_QWORD *)(v6 + 40) = v54;
            v56 = *(_QWORD *)(a2 + 48);
            *(_QWORD *)(a2 + 40) = v55;
            v57 = *(_QWORD *)(v6 + 48);
            *(_QWORD *)(v6 + 48) = v56;
            LODWORD(v56) = *(_DWORD *)(a2 + 56);
            *(_QWORD *)(a2 + 48) = v57;
            LODWORD(v57) = *(_DWORD *)(v6 + 56);
            *(_DWORD *)(v6 + 56) = v56;
            *(_DWORD *)(a2 + 56) = v57;
            LODWORD(v57) = *(_DWORD *)(v6 + 12);
            *(_DWORD *)(v6 + 12) = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 12) = v57;
            *(_QWORD *)(a2 + 24) = *(_QWORD *)(v6 + 32);
            v10 = *(_QWORD **)(v6 + 24);
            *(_QWORD *)(v6 + 32) = a2;
            v11 = (unsigned int)(*((_DWORD *)v5 + 6) - 72);
            if ( (unsigned int)v11 > 0xC )
            {
LABEL_64:
              if ( !under_debugger )
                sub_383060(0xC5B9u, a3);
              goto LABEL_74;
            }
LABEL_14:
            switch ( v11 )
            {
              case 0LL:
              case 8LL:
              case 12LL:
                v5[2] = *(_QWORD *)a2;
                goto LABEL_45;
              case 1LL:
                v5[2] = sub_2418B0(a2);
                goto LABEL_45;
              case 5LL:
LABEL_45:
                sub_255850((__int64 *)v6, a2, a3);
                v66 = -1;
                v67 = -4294967226LL;
                v68 = 0xFFFFFFFFLL;
                v69 = 0;
                v37 = qalloc_or_throw(48, a2, v35, v36);
                *(_QWORD *)(v37 + 16) = -1;
                *(_DWORD *)(v37 + 24) = 70;
                a2 = (__int64)&v66;
                *(_QWORD *)(v37 + 28) = -1;
                v62 = v37;
                sub_25AA70(v37 + 16, (__int64)&v66, a3);
                *(_QWORD *)v62 = v5;
                v38 = (__int64 *)v5[1];
                *(_QWORD *)(v62 + 8) = v38;
                *v38 = v62;
                v5[1] = v62;
                ++v4[2];
                sub_255050((__int64)&v66, a3);
                ++v64;
                *(_QWORD *)(v62 + 16) = *v10;
                v5 = (__int64 *)v62;
                *(_DWORD *)(v62 + 24) = 72;
                *(_QWORD *)(v62 + 40) = v10;
                *(_DWORD *)(v62 + 28) = v7;
                goto LABEL_18;
              default:
                goto LABEL_64;
            }
          }
          goto LABEL_16;
        }
        if ( v9 > 0x30 )
        {
          if ( v9 != 66 )
            goto LABEL_16;
          if ( *((_DWORD *)v5 + 6) != 72 )
          {
            if ( !under_debugger )
              sub_383060(0xC5BAu, a3);
            goto LABEL_74;
          }
          v40 = *(__int64 **)(v6 + 24);
          v41 = *((_DWORD *)v40 + 3);
          if ( v7 == -1 )
          {
            *((_DWORD *)v40 + 3) = -1;
            if ( v41 == -2 )
              goto LABEL_16;
            v7 = v41;
          }
          else if ( v41 != -1 )
          {
            goto LABEL_16;
          }
          v42 = *v40;
          *v40 = v5[2];
          v43 = *((_DWORD *)v5 + 6);
          v5[2] = v42;
          LODWORD(v42) = *((_DWORD *)v40 + 2);
          *((_DWORD *)v40 + 2) = v43;
          a2 = *((unsigned int *)v5 + 7);
          *((_DWORD *)v5 + 6) = v42;
          LODWORD(v42) = *((_DWORD *)v40 + 3);
          *((_DWORD *)v40 + 3) = a2;
          *((_DWORD *)v5 + 7) = v42;
          v5[5] = v40[3];
          *((_DWORD *)v40 + 2) = 70;
          v40[3] = 0;
          if ( v6 )
          {
            sub_255630(v6, a3);
            clear_tinfo_t();
            j__qfree(v6);
          }
          ++v64;
          v44 = *((_DWORD *)v5 + 6) == 82;
          *((_DWORD *)v5 + 7) = v7;
          v65 |= v44;
        }
        else
        {
          if ( v9 )
          {
            if ( v9 == 1 )
            {
              a2 = *(_QWORD *)(v6 + 32);
              v10 = *(_QWORD **)(v6 + 24);
              v11 = (unsigned int)(*((_DWORD *)v5 + 6) - 72);
              goto LABEL_14;
            }
LABEL_16:
            *((_DWORD *)v5 + 7) = v7;
LABEL_17:
            v5 = (__int64 *)*v5;
            goto LABEL_18;
          }
          if ( v7 != -1 || *((_DWORD *)v5 + 6) != 72 )
            goto LABEL_16;
          v45 = (__int64 *)*v5;
          *(_QWORD *)v5[1] = *v5;
          v45[1] = v5[1];
          sub_255050((__int64)(v5 + 2), a3);
          v46 = (__int64)v5;
          v5 = v45;
          qfree(v46);
          --v4[2];
        }
LABEL_18:
        if ( v4 != v5 )
          continue;
        if ( v65 )
        {
          for ( i = *v4; v4 != (__int64 *)i; i = v13 )
          {
            v13 = *(_QWORD *)i;
            if ( *(_DWORD *)(i + 24) == 82 )
            {
              v14 = *(__int64 **)(i + 40);
              if ( v4 != (__int64 *)v13 )
              {
                while ( *(_DWORD *)(v13 + 24) == 82 && *(_DWORD *)(v13 + 28) == -1 )
                {
                  v15 = *(_QWORD **)(v13 + 40);
                  v16 = 0;
                  for ( j = 0; (unsigned __int64)v16 < v15[1]; j = v16 )
                  {
                    v18 = *(_QWORD *)(*v15 + 8 * j);
                    v19 = v14[1];
                    v20 = (_QWORD *)(*v14 + 8 * v19);
                    if ( (_QWORD *)*v14 == v20 )
                      goto LABEL_66;
                    v21 = (_QWORD *)*v14;
                    while ( v18 != *v21 )
                    {
                      if ( v20 == ++v21 )
                        goto LABEL_66;
                    }
                    if ( v21 == v20 )
                    {
LABEL_66:
                      v58 = v19 + 1;
                      if ( v14[2] < v58 )
                      {
                        v59 = qvector_reserve((__int64)v14, *v14, v58, 8);
                        v60 = v14[1];
                        *v14 = v59;
                        v20 = (_QWORD *)(v59 + 8 * v60);
                      }
                      *v20 = v18;
                      ++v14[1];
                      v15 = *(_QWORD **)(v13 + 40);
                    }
                    ++v16;
                  }
                  v22 = *(__int64 **)v13;
                  **(_QWORD **)(v13 + 8) = *(_QWORD *)v13;
                  v22[1] = *(_QWORD *)(v13 + 8);
                  sub_255050(v13 + 16, a3);
                  qfree(v13);
                  --v4[2];
                  if ( v4 == v22 )
                  {
                    v13 = (__int64)v4;
                    break;
                  }
                  v13 = (__int64)v22;
                }
              }
            }
          }
        }
        return v64;
      case 'R':
        v65 = 1;
        goto LABEL_17;
      default:
        goto LABEL_17;
    }
  }
}

