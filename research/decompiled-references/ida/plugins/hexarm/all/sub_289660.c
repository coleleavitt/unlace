__int64 __fastcall sub_289660(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r15
  __int64 v4; // r13
  int v5; // r14d
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rsi
  _QWORD *v9; // r12
  __int64 v10; // rax
  _QWORD *i; // rax
  _QWORD *v12; // r14
  __int64 *v13; // r12
  _QWORD *v14; // rdi
  int v15; // r13d
  __int64 j; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rbp
  int v22; // ecx
  __int64 v23; // r14
  _QWORD *v24; // r12
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // edi
  int v30; // edi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 *v37; // rax
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // esi
  int v41; // esi
  bool v42; // al
  _QWORD *v43; // r12
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+8h] [rbp-80h]
  int v59; // [rsp+14h] [rbp-74h]
  unsigned int v60; // [rsp+18h] [rbp-70h]
  char v61; // [rsp+1Fh] [rbp-69h]
  __int64 v62; // [rsp+20h] [rbp-68h] BYREF
  __int64 v63; // [rsp+28h] [rbp-60h]
  __int64 v64; // [rsp+30h] [rbp-58h]
  __int64 v65; // [rsp+38h] [rbp-50h]
  unsigned __int64 v66; // [rsp+48h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_3835A0(50616);
LABEL_74:
    BUG();
  }
  v2 = *(_QWORD **)(a2 + 24);
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0;
  v61 = 0;
  v60 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)v3 + 6) )
    {
      case 'G':
        v57 = (_QWORD *)v3[5];
        v59 = *((_DWORD *)v3 + 7);
        v22 = *(_DWORD *)(*v57 + 28LL);
        if ( v59 == -1 )
        {
          *(_DWORD *)(*v57 + 28LL) = -1;
          v59 = v22;
        }
        else
        {
          if ( v22 != -1 )
            goto LABEL_17;
          *((_DWORD *)v3 + 7) = -1;
        }
        if ( v59 == -2 )
          goto LABEL_17;
        v23 = (__int64)v3;
        v24 = v57;
        if ( (_QWORD *)*v24 != v24 )
        {
          do
          {
            v25 = v23;
            v62 = -1;
            v63 = -4294967226LL;
            v64 = 0xFFFFFFFFLL;
            v65 = 0;
            v23 = qalloc_or_throw();
            *(_QWORD *)(v23 + 16) = -1;
            *(_DWORD *)(v23 + 24) = 70;
            *(_QWORD *)(v23 + 28) = -1;
            sub_25AE30(v23 + 16, (__int64)&v62);
            *(_QWORD *)v23 = v25;
            v26 = *(__int64 **)(v25 + 8);
            *(_QWORD *)(v23 + 8) = v26;
            *v26 = v23;
            *(_QWORD *)(v25 + 8) = v23;
            ++v2[2];
            sub_255410((__int64)&v62);
            v27 = v24[1];
            v28 = *(_QWORD *)(v23 + 16);
            *(_QWORD *)(v23 + 16) = *(_QWORD *)(v27 + 16);
            v29 = *(_DWORD *)(v27 + 24);
            *(_QWORD *)(v27 + 16) = v28;
            LODWORD(v28) = *(_DWORD *)(v23 + 24);
            *(_DWORD *)(v23 + 24) = v29;
            v30 = *(_DWORD *)(v27 + 28);
            *(_DWORD *)(v27 + 24) = v28;
            LODWORD(v28) = *(_DWORD *)(v23 + 28);
            *(_DWORD *)(v23 + 28) = v30;
            v31 = *(_QWORD *)(v27 + 40);
            *(_DWORD *)(v27 + 28) = v28;
            v32 = *(_QWORD *)(v23 + 40);
            *(_QWORD *)(v23 + 40) = v31;
            *(_QWORD *)(v27 + 40) = v32;
            v24 = (_QWORD *)v24[1];
          }
          while ( v24 != (_QWORD *)*v57 );
        }
        *(_DWORD *)(v23 + 28) = v59;
        v33 = *v3;
        *(_QWORD *)v3[1] = *v3;
        *(_QWORD *)(v33 + 8) = v3[1];
        sub_255410((__int64)(v3 + 2));
        v3 = (_QWORD *)v23;
        qfree();
        --v2[2];
        ++v60;
        goto LABEL_18;
      case 'H':
      case 'I':
      case 'M':
      case 'P':
      case 'T':
        v4 = v3[5];
        v5 = *((_DWORD *)v3 + 7);
        v6 = *(_DWORD *)(v4 + 12);
        if ( v5 == -1 )
        {
          *(_DWORD *)(v4 + 12) = -1;
          v5 = v6;
        }
        else
        {
          if ( v6 != -1 )
            goto LABEL_17;
          *((_DWORD *)v3 + 7) = -1;
        }
        if ( v5 == -2 )
          goto LABEL_17;
        v7 = *(_DWORD *)(v4 + 8);
        if ( v7 == 48 )
        {
          v8 = *(_QWORD *)(v4 + 24);
          if ( *(_DWORD *)(v8 + 8) == 1 )
          {
            v44 = *(_QWORD *)v4;
            *(_QWORD *)v4 = *(_QWORD *)v8;
            v45 = *(_DWORD *)(v8 + 8);
            *(_QWORD *)v8 = v44;
            LODWORD(v44) = *(_DWORD *)(v4 + 8);
            *(_DWORD *)(v4 + 8) = v45;
            v46 = *(_DWORD *)(v8 + 12);
            *(_DWORD *)(v8 + 8) = v44;
            LODWORD(v44) = *(_DWORD *)(v4 + 12);
            *(_DWORD *)(v4 + 12) = v46;
            v47 = *(_QWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 12) = v44;
            v48 = *(_QWORD *)(v4 + 24);
            *(_QWORD *)(v4 + 24) = v47;
            v49 = *(_QWORD *)(v8 + 32);
            *(_QWORD *)(v8 + 24) = v48;
            v50 = *(_QWORD *)(v4 + 32);
            *(_QWORD *)(v4 + 32) = v49;
            v51 = *(_QWORD *)(v8 + 40);
            *(_QWORD *)(v8 + 32) = v50;
            v52 = *(_QWORD *)(v4 + 40);
            *(_QWORD *)(v4 + 40) = v51;
            v53 = *(_QWORD *)(v8 + 48);
            *(_QWORD *)(v8 + 40) = v52;
            v54 = *(_QWORD *)(v4 + 48);
            *(_QWORD *)(v4 + 48) = v53;
            LODWORD(v53) = *(_DWORD *)(v8 + 56);
            *(_QWORD *)(v8 + 48) = v54;
            LODWORD(v54) = *(_DWORD *)(v4 + 56);
            *(_DWORD *)(v4 + 56) = v53;
            *(_DWORD *)(v8 + 56) = v54;
            LODWORD(v54) = *(_DWORD *)(v4 + 12);
            *(_DWORD *)(v4 + 12) = *(_DWORD *)(v8 + 12);
            *(_DWORD *)(v8 + 12) = v54;
            *(_QWORD *)(v8 + 24) = *(_QWORD *)(v4 + 32);
            v9 = *(_QWORD **)(v4 + 24);
            *(_QWORD *)(v4 + 32) = v8;
            v10 = (unsigned int)(*((_DWORD *)v3 + 6) - 72);
            if ( (unsigned int)v10 > 0xC )
            {
LABEL_64:
              if ( !under_debugger )
                sub_3835A0(50617);
              goto LABEL_74;
            }
LABEL_14:
            switch ( v10 )
            {
              case 0LL:
              case 8LL:
              case 12LL:
                v3[2] = *(_QWORD *)v8;
                goto LABEL_45;
              case 1LL:
                v3[2] = sub_241C70(v8);
                goto LABEL_45;
              case 5LL:
LABEL_45:
                sub_255C10((__int64 *)v4, v8);
                v62 = -1;
                v63 = -4294967226LL;
                v64 = 0xFFFFFFFFLL;
                v65 = 0;
                v34 = qalloc_or_throw();
                *(_QWORD *)(v34 + 16) = -1;
                *(_DWORD *)(v34 + 24) = 70;
                *(_QWORD *)(v34 + 28) = -1;
                v58 = v34;
                sub_25AE30(v34 + 16, (__int64)&v62);
                *(_QWORD *)v58 = v3;
                v35 = (__int64 *)v3[1];
                *(_QWORD *)(v58 + 8) = v35;
                *v35 = v58;
                v3[1] = v58;
                ++v2[2];
                sub_255410((__int64)&v62);
                ++v60;
                *(_QWORD *)(v58 + 16) = *v9;
                v3 = (_QWORD *)v58;
                *(_DWORD *)(v58 + 24) = 72;
                *(_QWORD *)(v58 + 40) = v9;
                *(_DWORD *)(v58 + 28) = v5;
                goto LABEL_18;
              default:
                goto LABEL_64;
            }
          }
          goto LABEL_16;
        }
        if ( v7 > 0x30 )
        {
          if ( v7 != 66 )
            goto LABEL_16;
          if ( *((_DWORD *)v3 + 6) != 72 )
          {
            if ( !under_debugger )
              sub_3835A0(50618);
            goto LABEL_74;
          }
          v37 = *(__int64 **)(v4 + 24);
          v38 = *((_DWORD *)v37 + 3);
          if ( v5 == -1 )
          {
            *((_DWORD *)v37 + 3) = -1;
            if ( v38 == -2 )
              goto LABEL_16;
            v5 = v38;
          }
          else if ( v38 != -1 )
          {
            goto LABEL_16;
          }
          v39 = *v37;
          *v37 = v3[2];
          v40 = *((_DWORD *)v3 + 6);
          v3[2] = v39;
          LODWORD(v39) = *((_DWORD *)v37 + 2);
          *((_DWORD *)v37 + 2) = v40;
          v41 = *((_DWORD *)v3 + 7);
          *((_DWORD *)v3 + 6) = v39;
          LODWORD(v39) = *((_DWORD *)v37 + 3);
          *((_DWORD *)v37 + 3) = v41;
          *((_DWORD *)v3 + 7) = v39;
          v3[5] = v37[3];
          *((_DWORD *)v37 + 2) = 70;
          v37[3] = 0;
          if ( v4 )
          {
            sub_2559F0(v4);
            clear_tinfo_t();
            j__qfree();
          }
          ++v60;
          v42 = *((_DWORD *)v3 + 6) == 82;
          *((_DWORD *)v3 + 7) = v5;
          v61 |= v42;
        }
        else
        {
          if ( v7 )
          {
            if ( v7 == 1 )
            {
              v8 = *(_QWORD *)(v4 + 32);
              v9 = *(_QWORD **)(v4 + 24);
              v10 = (unsigned int)(*((_DWORD *)v3 + 6) - 72);
              goto LABEL_14;
            }
LABEL_16:
            *((_DWORD *)v3 + 7) = v5;
LABEL_17:
            v3 = (_QWORD *)*v3;
            goto LABEL_18;
          }
          if ( v5 != -1 || *((_DWORD *)v3 + 6) != 72 )
            goto LABEL_16;
          v43 = (_QWORD *)*v3;
          *(_QWORD *)v3[1] = *v3;
          v43[1] = v3[1];
          sub_255410((__int64)(v3 + 2));
          v3 = v43;
          qfree();
          --v2[2];
        }
LABEL_18:
        if ( v2 != v3 )
          continue;
        if ( v61 )
        {
          for ( i = (_QWORD *)*v2; v2 != i; i = v12 )
          {
            v12 = (_QWORD *)*i;
            if ( *((_DWORD *)i + 6) == 82 )
            {
              v13 = (__int64 *)i[5];
              if ( v2 != v12 )
              {
                while ( *((_DWORD *)v12 + 6) == 82 && *((_DWORD *)v12 + 7) == -1 )
                {
                  v14 = (_QWORD *)v12[5];
                  v15 = 0;
                  for ( j = 0; (unsigned __int64)v15 < v14[1]; j = v15 )
                  {
                    v17 = *(_QWORD *)(*v14 + 8 * j);
                    v18 = v13[1];
                    v19 = (_QWORD *)(*v13 + 8 * v18);
                    if ( (_QWORD *)*v13 == v19 )
                      goto LABEL_66;
                    v20 = (_QWORD *)*v13;
                    while ( v17 != *v20 )
                    {
                      if ( v19 == ++v20 )
                        goto LABEL_66;
                    }
                    if ( v20 == v19 )
                    {
LABEL_66:
                      if ( v13[2] < (unsigned __int64)(v18 + 1) )
                      {
                        v55 = qvector_reserve();
                        v56 = v13[1];
                        *v13 = v55;
                        v19 = (_QWORD *)(v55 + 8 * v56);
                      }
                      *v19 = v17;
                      ++v13[1];
                      v14 = (_QWORD *)v12[5];
                    }
                    ++v15;
                  }
                  v21 = (_QWORD *)*v12;
                  *(_QWORD *)v12[1] = *v12;
                  v21[1] = v12[1];
                  sub_255410((__int64)(v12 + 2));
                  qfree();
                  --v2[2];
                  if ( v2 == v21 )
                  {
                    v12 = v2;
                    break;
                  }
                  v12 = v21;
                }
              }
            }
          }
        }
        return v60;
      case 'R':
        v61 = 1;
        goto LABEL_17;
      default:
        goto LABEL_17;
    }
  }
}

