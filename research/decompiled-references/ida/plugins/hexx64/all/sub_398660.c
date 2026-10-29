__int64 __fastcall sub_398660(
        __int64 a1,
        __int64 a2,
        const void **a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        __m128i a8,
        double a9)
{
  size_t v9; // rbx
  _BYTE *v12; // rbx
  const char *v13; // rsi
  const char *v14; // rdi
  char v15; // bl
  __int64 v16; // rdx
  unsigned int v17; // ebx
  int v18; // ebx
  int v19; // eax
  const void *v21; // r12
  void *v22; // rdi
  __int64 v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  __int64 v26; // rax
  signed __int64 v27; // rbp
  const char *v28; // rax
  int i; // ebx
  char v30; // al
  __int64 v31; // rdi
  unsigned __int64 v32; // r8
  char *v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-138h]
  const char *v35; // [rsp+8h] [rbp-130h]
  unsigned __int64 v36; // [rsp+10h] [rbp-128h]
  char v38; // [rsp+28h] [rbp-110h]
  char v39; // [rsp+2Fh] [rbp-109h]
  __int64 v40; // [rsp+38h] [rbp-100h] BYREF
  void *dest; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v42; // [rsp+48h] [rbp-F0h]
  __m128i v43; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-C8h]
  __int128 v45; // [rsp+78h] [rbp-C0h]
  __int64 v46; // [rsp+88h] [rbp-B0h]
  __int128 v47; // [rsp+90h] [rbp-A8h]
  __int128 v48; // [rsp+A0h] [rbp-98h]
  __int64 v49; // [rsp+D0h] [rbp-68h]
  int v50; // [rsp+D8h] [rbp-60h]
  __int64 v51; // [rsp+E0h] [rbp-58h]
  char v52; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+F8h] [rbp-40h]

  v38 = a4;
  v53 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    v17 = 0;
    sub_2B4E70((__int64)"AUTOHIDE NONE\nCannot rename register variables");
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 40);
    dest = nullptr;
    v42 = 0;
    if ( v9 )
    {
      v24 = (void *)qalloc_or_throw(v9, a2, (__int64)a3, a4);
      v25 = *(const void **)(a2 + 32);
      *((_QWORD *)&v42 + 1) = v9;
      dest = v24;
      memcpy(v24, v25, v9);
      *(_QWORD *)&v42 = v9;
    }
    if ( !a3 )
    {
      v39 = 0;
      goto LABEL_23;
    }
    v12 = a3[1];
    if ( (unsigned __int64)v12 > 1 )
    {
      v21 = *a3;
      v22 = dest;
      if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)v12 )
      {
        dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, (__int64)a3[1], 1);
        v22 = dest;
      }
      *(_QWORD *)&v42 = v12;
      memmove(v22, v21, (size_t)(v12 - 1));
      v39 = 0;
      v12[(_QWORD)dest - 1] = 0;
      goto LABEL_24;
    }
    *(_QWORD *)&v42 = 0;
    v39 = 0;
LABEL_7:
    if ( *(_QWORD *)(a2 + 40) )
    {
      v36 = 0;
      v13 = s1;
LABEL_9:
      v14 = *(const char **)(a2 + 32);
      while ( strcmp(v14, v13) )
      {
        v35 = (const char *)dest;
        if ( v36 > 1 && sub_213140(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
        {
          v19 = sub_33D190(
                  1u,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "Sorry, name '%s' is already present in the database.\n"
                           "Do you want to add a numerical suffix to it?",
                  v35);
          if ( !v19 )
          {
            if ( a3 )
            {
              sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v35);
              break;
            }
            goto LABEL_23;
          }
          if ( v19 == -1 )
            break;
          v27 = v42 - 1;
          if ( !(_QWORD)v42 )
            v27 = 0;
          v28 = (char *)dest + v42;
          if ( v35 < (char *)dest + (unsigned __int64)v42 )
          {
            while ( (unsigned __int8)(*(v28 - 1) - 48) <= 9u )
            {
              if ( v35 == --v28 )
                goto LABEL_64;
            }
            if ( v35 < v28 && *(v28 - 1) == 95 )
              v27 = v28 - 1 - v35;
          }
LABEL_64:
          v35 = (const char *)dest;
          for ( i = 1; i != 1000; ++i )
          {
            if ( v27 )
            {
              v31 = v42;
              v32 = v27 + 1;
              if ( (unsigned __int64)v42 < v27 + 1 )
              {
                if ( *((_QWORD *)&v42 + 1) < v32 )
                {
                  v33 = (char *)qvector_reserve((__int64)&dest, (__int64)v35, v27 + 1, 1);
                  v31 = v42;
                  v32 = v27 + 1;
                  v35 = v33;
                  dest = v33;
                }
                v34 = v32;
                memset((void *)&v35[v31], 0, v32 - v31);
                *(_QWORD *)&v42 = v34;
                v35 = (const char *)dest;
              }
              else if ( v32 != (_QWORD)v42 )
              {
                *(_QWORD *)&v42 = v27 + 1;
              }
              v35[v27] = 0;
            }
            else if ( v35 )
            {
              *(_QWORD *)&v42 = 0;
              qfree((__int64)v35);
              dest = nullptr;
              *((_QWORD *)&v42 + 1) = 0;
            }
            sub_FAAD0((__int64 *)&dest);
            v30 = sub_213140(*(_QWORD *)(a1 + 24), (const char *)dest, -9);
            v35 = (const char *)dest;
            if ( !v30 )
              break;
          }
        }
        v40 = 0;
        v44 = 0;
        v46 = 0;
        v49 = 1;
        v50 = -1;
        v51 = 0;
        v52 = 0;
        v43 = 0;
        v45 = 0;
        v47 = 0;
        v48 = 0;
        v15 = sub_38B550(a1, (int *)a2, 0.0);
        if ( v15 && *(_DWORD *)a2 == 1 )
        {
          v16 = *(_QWORD *)(a2 + 8);
          if ( v16 >= 0 && sub_1D0250(*(_QWORD **)(a1 + 24), &v43, v16, nullptr, &v40, 0.0) != -1 )
          {
            if ( v39 || (v26 = *(_QWORD *)(a1 + 32)) == 0 )
            {
              if ( v36 <= 1 )
                goto LABEL_50;
            }
            else
            {
              *(_DWORD *)(v26 + 108) |= 8u;
              if ( v36 <= 1 )
              {
LABEL_50:
                get_tinfo_property4();
                get_func();
                build_stkvar_name();
                v35 = (const char *)dest;
              }
            }
            set_tinfo_property4();
            v39 = v15;
            goto LABEL_16;
          }
          if ( v36 <= 1 )
            goto LABEL_28;
        }
        else if ( v36 <= 1 )
        {
LABEL_28:
          if ( (*(_BYTE *)(a2 + 25) & 1) == 0 )
            sub_1F0D70((int *)a2, *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1504LL));
          v18 = 1;
          while ( 1 )
          {
            sub_6B870((__int64 *)&dest);
            if ( !sub_213140(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
              break;
            if ( ++v18 == 100 )
              goto LABEL_16;
          }
          v35 = (const char *)dest;
        }
LABEL_16:
        v17 = sub_397570(a1, a2, v35, v36 > 1, v38, 0.0, a7, a8, a9);
        if ( (_BYTE)v17 || (sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v35), a3) )
        {
          clear_tinfo_t();
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v46);
          }
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree(v44);
          }
          clear_tinfo_t();
          if ( !v39 )
            goto LABEL_40;
          goto LABEL_51;
        }
        clear_tinfo_t();
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(v46);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44);
        }
        clear_tinfo_t();
LABEL_23:
        v17 = sub_387F90((__int64)&dest, (__int64)"Please enter variable name");
        if ( !(_BYTE)v17 )
          goto LABEL_39;
LABEL_24:
        a4 = v42;
        v36 = v42;
        if ( !(_QWORD)v42 )
          goto LABEL_7;
        v13 = (const char *)dest;
        v14 = s1;
        if ( *(_QWORD *)(a2 + 40) )
          goto LABEL_9;
      }
    }
    v17 = 0;
LABEL_39:
    if ( v39 )
    {
LABEL_51:
      v23 = *(_QWORD *)(a1 + 32);
      if ( v23 )
      {
        *(_DWORD *)(v23 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
          sub_395A90(a1, 0, 0.0, (__int64)a3, a4, a5, a7, a8, a9);
      }
    }
LABEL_40:
    if ( dest )
    {
      *(_QWORD *)&v42 = 0;
      qfree((__int64)dest);
    }
  }
  return v17;
}

