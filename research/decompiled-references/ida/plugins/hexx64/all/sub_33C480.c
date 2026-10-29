__int64 __fastcall sub_33C480(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned __int64 **v10; // rdx
  unsigned __int64 *func; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 *v15; // rax
  unsigned int v16; // eax
  unsigned __int64 *v17; // rdx
  unsigned int v18; // eax
  unsigned __int64 **v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 *v31; // rax
  __int64 v32; // rbp
  unsigned __int64 *v33; // rdx
  unsigned int v34; // eax
  unsigned __int64 *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  _QWORD **v42; // rax
  unsigned int v43; // eax
  unsigned __int64 *v44; // rdx
  unsigned int v45; // eax
  unsigned __int64 **v46; // rdx
  unsigned int v47; // eax
  unsigned __int64 **v48; // rdx
  unsigned int v49; // edx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  unsigned __int64 *v54; // rax
  unsigned __int64 v55; // rbp
  unsigned int v56; // edx
  __int64 v57; // rax
  unsigned __int64 *v58; // rax
  __int64 v59; // rbp
  unsigned __int64 *v60; // rax
  __int64 *v61; // rdx
  unsigned __int64 *v62; // rdx
  unsigned __int64 *v63; // rdx

  if ( a2 > 82 )
    return 0;
  v8 = a3;
  if ( a2 > 31 )
  {
    switch ( a2 )
    {
      case ' ':
        goto LABEL_8;
      case '!':
      case ',':
        goto LABEL_27;
      case '"':
        v47 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v48 = *(unsigned __int64 ***)(a3 + 8);
          *(_QWORD *)(v8 + 8) = v48 + 1;
        }
        else
        {
          v48 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v47);
          *(_DWORD *)v8 = v47 + 8;
        }
        sub_37A1E0(*(_QWORD *)(a1 + 16), **v48, *(double *)a4.m128i_i64);
        return 0;
      case '#':
        sub_363A10(*(_QWORD *)(a1 + 16));
LABEL_27:
        v18 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 > 0x2Fu )
        {
          v19 = *(unsigned __int64 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v19 + 1;
        }
        else
        {
          v19 = (unsigned __int64 **)(*(_QWORD *)(v8 + 16) + v18);
          *(_DWORD *)v8 = v18 + 8;
        }
        sub_147D70(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), **v19, 0);
        return 0;
      case '\'':
      case ')':
        v9 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v10 = *(unsigned __int64 ***)(a3 + 8);
          *(_QWORD *)(v8 + 8) = v10 + 1;
        }
        else
        {
          v10 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v9);
          *(_DWORD *)v8 = v9 + 8;
        }
        func = *v10;
        goto LABEL_7;
      case '*':
        v49 = *(_DWORD *)a3;
        if ( v49 > 0x2F )
        {
          v62 = (unsigned __int64 *)(*(_QWORD *)(v8 + 8) + 8LL);
        }
        else
        {
          v50 = v49 + 8;
          *(_DWORD *)v8 = v50;
          if ( (unsigned int)v50 <= 0x2F )
          {
            v51 = *(_QWORD *)(v8 + 16);
            v52 = v49 + 16;
            *(_DWORD *)v8 = v52;
            v53 = *(_QWORD *)(v51 + v50);
            if ( (unsigned int)v52 <= 0x2F )
            {
              v54 = (unsigned __int64 *)(v52 + v51);
              *(_DWORD *)v8 = v49 + 24;
              goto LABEL_67;
            }
            v54 = *(unsigned __int64 **)(v8 + 8);
LABEL_88:
            *(_QWORD *)(v8 + 8) = v54 + 1;
LABEL_67:
            v55 = *v54;
            sub_147D70(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v53, 0);
            sub_147D70(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v55, 0);
            return 0;
          }
          v62 = *(unsigned __int64 **)(v8 + 8);
        }
        v54 = v62 + 1;
        *(_QWORD *)(v8 + 8) = v62 + 1;
        v53 = *v62;
        goto LABEL_88;
      case '+':
        v45 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v46 = *(unsigned __int64 ***)(a3 + 8);
          *(_QWORD *)(v8 + 8) = v46 + 1;
        }
        else
        {
          v46 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v45);
          *(_DWORD *)v8 = v45 + 8;
        }
        sub_375220(*(_QWORD *)(a1 + 16), **v46, 0xFFFFFFFFFFFFFFFFLL);
        return 0;
      case '1':
        v36 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v37 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(v8 + 8) = v37 + 8;
        }
        else
        {
          v37 = *(_QWORD *)(a3 + 16) + v36;
          *(_DWORD *)v8 = v36 + 8;
        }
        sub_375220(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)v37 + 16LL), 0xFFFFFFFFFFFFFFFFLL);
        return 0;
      case '2':
        goto LABEL_23;
      case '4':
        v43 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v44 = *(unsigned __int64 **)(a3 + 8);
          *(_QWORD *)(v8 + 8) = v44 + 1;
        }
        else
        {
          v44 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v43);
          *(_DWORD *)v8 = v43 + 8;
        }
        sub_13DBB0(*(_QWORD *)(a1 + 16), *v44);
        return 0;
      case '5':
        if ( *(_DWORD *)a3 > 0x2Fu )
          *(_QWORD *)(a3 + 8) += 8LL;
        else
          *(_DWORD *)a3 += 8;
        func = (unsigned __int64 *)get_func();
        if ( !func )
          goto LABEL_8;
LABEL_7:
        sub_147D70(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), *func, 0);
        goto LABEL_8;
      case '@':
        v34 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v35 = *(unsigned __int64 **)(a3 + 8);
          *(_QWORD *)(v8 + 8) = v35 + 1;
        }
        else
        {
          v35 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v34);
          *(_DWORD *)v8 = v34 + 8;
        }
        sub_37A1E0(*(_QWORD *)(a1 + 16), *v35, *(double *)a4.m128i_i64);
        return 0;
      case 'H':
        sub_374DF0(*(_QWORD *)(a1 + 16));
        return 0;
      case 'L':
        v56 = *(_DWORD *)a3;
        if ( v56 > 0x2F )
        {
          v58 = (unsigned __int64 *)(*(_QWORD *)(v8 + 8) + 8LL);
        }
        else
        {
          v57 = v56 + 8;
          *(_DWORD *)v8 = v57;
          if ( (unsigned int)v57 <= 0x2F )
          {
            v58 = (unsigned __int64 *)(*(_QWORD *)(v8 + 16) + v57);
            *(_DWORD *)v8 = v56 + 16;
            goto LABEL_75;
          }
          v58 = *(unsigned __int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v58 + 1;
LABEL_75:
        sub_375220(*(_QWORD *)(a1 + 16), *v58, 0xFFFFFFFFFFFFFFFFLL);
        return 0;
      case 'P':
      case 'R':
        v20 = *(_DWORD *)a3;
        if ( v20 > 0x2F )
        {
          v33 = *(unsigned __int64 **)(v8 + 8);
          v24 = v33 + 1;
          *(_QWORD *)(v8 + 8) = v33 + 1;
          v23 = *v33;
        }
        else
        {
          v21 = *(_QWORD *)(v8 + 16);
          v22 = v20 + 8;
          *(_DWORD *)v8 = v22;
          v23 = *(_QWORD *)(v21 + v20);
          if ( (unsigned int)v22 <= 0x2F )
          {
            v24 = (unsigned __int64 *)(v22 + v21);
            *(_DWORD *)v8 = v20 + 16;
            goto LABEL_33;
          }
          v24 = *(unsigned __int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v24 + 1;
LABEL_33:
        sub_375220(*(_QWORD *)(a1 + 16), *v24, v23);
        return 0;
      case 'Q':
        v38 = *(_DWORD *)a3;
        if ( v38 > 0x2F )
        {
          v63 = *(unsigned __int64 **)(v8 + 8);
          v42 = (_QWORD **)(v63 + 1);
          *(_QWORD *)(v8 + 8) = v63 + 1;
          v41 = *v63;
        }
        else
        {
          v39 = *(_QWORD *)(v8 + 16);
          v40 = v38 + 8;
          *(_DWORD *)v8 = v40;
          v41 = *(_QWORD *)(v39 + v38);
          if ( (unsigned int)v40 <= 0x2F )
          {
            v42 = (_QWORD **)(v40 + v39);
            *(_DWORD *)v8 = v38 + 16;
            goto LABEL_53;
          }
          v42 = *(_QWORD ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v42 + 1;
LABEL_53:
        sub_3984C0(*(_QWORD *)(a1 + 16), v41, *v42, *(double *)a4.m128i_i64);
        return 0;
      default:
        return 0;
    }
  }
  if ( a2 > 17 )
  {
    if ( ((1LL << a2) & 0x35540000) != 0 )
    {
LABEL_39:
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x20u;
      return 0;
    }
    if ( (_DWORD)a2 != 30 )
    {
      if ( (_DWORD)a2 == 31 )
      {
        v13 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v13 + 1416) & 0x10) == 0 )
        {
          v14 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            a3 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(v8 + 8) = a3 + 8;
          }
          else
          {
            a3 = *(_QWORD *)(a3 + 16) + v14;
            *(_DWORD *)v8 = v14 + 8;
          }
          v15 = *(__int64 **)a3;
          v13 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)a3 )
          {
            if ( v15[1] )
            {
              a3 = *v15;
              *(_QWORD *)(v13 + 1408) = *(_QWORD *)(*v15 + 8) + *(_QWORD *)(v13 + 1408) - *(_QWORD *)*v15;
              v13 = *(_QWORD *)(a1 + 16);
            }
          }
        }
        sub_3A7990(v13, a2, a3, (unsigned int)a2, a6, a7);
LABEL_8:
        sub_363A10(*(_QWORD *)(a1 + 16));
      }
      return 0;
    }
    v25 = *(_DWORD *)a3;
    if ( v25 > 0x2F )
    {
      v60 = *(unsigned __int64 **)(v8 + 8);
      v61 = (__int64 *)(v60 + 1);
      *(_QWORD *)(v8 + 8) = v60 + 1;
      v28 = *v60;
    }
    else
    {
      v26 = *(_QWORD *)(v8 + 16);
      v27 = v25 + 8;
      *(_DWORD *)v8 = v27;
      v28 = *(_QWORD *)(v26 + v25);
      if ( (unsigned int)v27 <= 0x2F )
      {
        v29 = v25 + 16;
        *(_DWORD *)v8 = v29;
        v30 = *(_QWORD *)(v26 + v27);
        if ( (unsigned int)v29 <= 0x2F )
        {
          v31 = (__int64 *)(v29 + v26);
          *(_DWORD *)v8 = v25 + 24;
LABEL_38:
          v32 = *v31;
          sub_3A5BE0(*(_QWORD **)(a1 + 16), v28, v30, *v31);
          sub_382880(*(_QWORD ***)(a1 + 16), v28, v30, v32);
          sub_363A10(*(_QWORD *)(a1 + 16));
          goto LABEL_39;
        }
        v31 = *(__int64 **)(v8 + 8);
LABEL_81:
        *(_QWORD *)(v8 + 8) = v31 + 1;
        goto LABEL_38;
      }
      v61 = *(__int64 **)(v8 + 8);
    }
    v31 = v61 + 1;
    *(_QWORD *)(v8 + 8) = v61 + 1;
    v30 = *v61;
    goto LABEL_81;
  }
  if ( a2 == 1 )
  {
    v59 = *(_QWORD *)(a1 + 16);
    sub_146E60(v59, a4);
    sub_33B870(v59);
  }
  else if ( a2 == 13 )
  {
LABEL_23:
    v16 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v17 = *(unsigned __int64 **)(a3 + 8);
      *(_QWORD *)(v8 + 8) = v17 + 1;
    }
    else
    {
      v17 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v16);
      *(_DWORD *)v8 = v16 + 8;
    }
    sub_375220(*(_QWORD *)(a1 + 16), *v17, 0xFFFFFFFFFFFFFFFFLL);
  }
  return 0;
}

