__int64 __fastcall sub_398BA0(
        __int64 a1,
        __int64 a2,
        const void **a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  size_t v13; // rbx
  unsigned __int64 v16; // rbx
  const char *v17; // rsi
  const char *v18; // rdi
  char v19; // bl
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdx
  unsigned int v23; // ebx
  int v24; // ebx
  int v25; // eax
  const void *v27; // r12
  void *v28; // rdi
  __int64 v29; // rax
  void *v30; // rax
  const void *v31; // rsi
  __int64 v32; // rax
  signed __int64 v33; // rbp
  const char *v34; // rax
  int i; // ebx
  char v36; // al
  __int64 v37; // rdi
  unsigned __int64 v38; // r8
  char *v39; // rax
  unsigned __int64 v40; // [rsp+0h] [rbp-138h]
  const char *v41; // [rsp+8h] [rbp-130h]
  unsigned __int64 v42; // [rsp+10h] [rbp-128h]
  char v44; // [rsp+28h] [rbp-110h]
  char v45; // [rsp+2Fh] [rbp-109h]
  __int64 v46; // [rsp+38h] [rbp-100h] BYREF
  void *dest; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+48h] [rbp-F0h]
  __m128i v49; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+70h] [rbp-C8h]
  __int128 v51; // [rsp+78h] [rbp-C0h]
  __int64 v52; // [rsp+88h] [rbp-B0h]
  __int128 v53; // [rsp+90h] [rbp-A8h]
  __int128 v54; // [rsp+A0h] [rbp-98h]
  __int64 v55; // [rsp+D0h] [rbp-68h]
  int v56; // [rsp+D8h] [rbp-60h]
  __int64 v57; // [rsp+E0h] [rbp-58h]
  char v58; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v59; // [rsp+F8h] [rbp-40h]

  v44 = a4;
  v59 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    v23 = 0;
    sub_2B5230((__int64)"AUTOHIDE NONE\nCannot rename register variables");
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 40);
    dest = nullptr;
    v48 = 0;
    if ( v13 )
    {
      v30 = (void *)qalloc_or_throw();
      v31 = *(const void **)(a2 + 32);
      *((_QWORD *)&v48 + 1) = v13;
      dest = v30;
      memcpy(v30, v31, v13);
      *(_QWORD *)&v48 = v13;
    }
    if ( !a3 )
    {
      v45 = 0;
      goto LABEL_23;
    }
    v16 = (unsigned __int64)a3[1];
    if ( v16 > 1 )
    {
      v27 = *a3;
      v28 = dest;
      if ( *((_QWORD *)&v48 + 1) < v16 )
      {
        dest = (void *)qvector_reserve();
        v28 = dest;
      }
      *(_QWORD *)&v48 = v16;
      memmove(v28, v27, v16 - 1);
      v45 = 0;
      *((char *)dest + v16 - 1) = 0;
      goto LABEL_24;
    }
    *(_QWORD *)&v48 = 0;
    v45 = 0;
LABEL_7:
    if ( *(_QWORD *)(a2 + 40) )
    {
      v42 = 0;
      v17 = s1;
LABEL_9:
      v18 = *(const char **)(a2 + 32);
      while ( strcmp(v18, v17) )
      {
        v41 = (const char *)dest;
        if ( v42 > 1 && sub_213500(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
        {
          v25 = sub_33D600(
                  1u,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "Sorry, name '%s' is already present in the database.\n"
                           "Do you want to add a numerical suffix to it?",
                  v41);
          if ( !v25 )
          {
            if ( a3 )
            {
              sub_2B5230((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v41);
              break;
            }
            goto LABEL_23;
          }
          if ( v25 == -1 )
            break;
          v33 = v48 - 1;
          if ( !(_QWORD)v48 )
            v33 = 0;
          v34 = (char *)dest + v48;
          if ( v41 < (char *)dest + (unsigned __int64)v48 )
          {
            while ( (unsigned __int8)(*(v34 - 1) - 48) <= 9u )
            {
              if ( v41 == --v34 )
                goto LABEL_64;
            }
            if ( v41 < v34 && *(v34 - 1) == 95 )
              v33 = v34 - 1 - v41;
          }
LABEL_64:
          v41 = (const char *)dest;
          for ( i = 1; i != 1000; ++i )
          {
            if ( v33 )
            {
              v37 = v48;
              v38 = v33 + 1;
              if ( (unsigned __int64)v48 < v33 + 1 )
              {
                if ( *((_QWORD *)&v48 + 1) < v38 )
                {
                  v39 = (char *)qvector_reserve();
                  v37 = v48;
                  v38 = v33 + 1;
                  v41 = v39;
                  dest = v39;
                }
                v40 = v38;
                memset((void *)&v41[v37], 0, v38 - v37);
                *(_QWORD *)&v48 = v40;
                v41 = (const char *)dest;
              }
              else if ( v38 != (_QWORD)v48 )
              {
                *(_QWORD *)&v48 = v33 + 1;
              }
              v41[v33] = 0;
            }
            else if ( v41 )
            {
              *(_QWORD *)&v48 = 0;
              qfree();
              dest = nullptr;
              *((_QWORD *)&v48 + 1) = 0;
            }
            sub_FA510((__int64 *)&dest);
            v36 = sub_213500(*(_QWORD *)(a1 + 24), (const char *)dest, -9);
            v41 = (const char *)dest;
            if ( !v36 )
              break;
          }
        }
        v46 = 0;
        v50 = 0;
        v52 = 0;
        v55 = 1;
        v56 = -1;
        v57 = 0;
        v58 = 0;
        v49 = 0;
        v51 = 0;
        v53 = 0;
        v54 = 0;
        v19 = sub_38BA90(a1, (int *)a2, 0.0);
        if ( v19 && *(_DWORD *)a2 == 1 )
        {
          v22 = *(_QWORD *)(a2 + 8);
          if ( v22 >= 0 && sub_1CFC90(*(_QWORD **)(a1 + 24), &v49, v22, nullptr, &v46) != -1 )
          {
            if ( v45 || (v32 = *(_QWORD *)(a1 + 32)) == 0 )
            {
              if ( v42 <= 1 )
                goto LABEL_50;
            }
            else
            {
              *(_DWORD *)(v32 + 108) |= 8u;
              if ( v42 <= 1 )
              {
LABEL_50:
                get_tinfo_property4();
                get_func();
                build_stkvar_name();
                v41 = (const char *)dest;
              }
            }
            set_tinfo_property4();
            v45 = v19;
            goto LABEL_16;
          }
          if ( v42 <= 1 )
            goto LABEL_28;
        }
        else if ( v42 <= 1 )
        {
LABEL_28:
          if ( (*(_BYTE *)(a2 + 25) & 1) == 0 )
            sub_1F1130((int *)a2, *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1504LL));
          v24 = 1;
          while ( 1 )
          {
            sub_6B2B0((__int64 *)&dest);
            if ( !sub_213500(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
              break;
            if ( ++v24 == 100 )
              goto LABEL_16;
          }
          v41 = (const char *)dest;
        }
LABEL_16:
        v23 = sub_397AB0(a1, a2, v41, v42 > 1, v44, (__m128)0LL, a7, a8, a9, v20, v21, a12, a13);
        if ( (_BYTE)v23 || (sub_2B5230((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v41), a3) )
        {
          clear_tinfo_t();
          if ( v52 )
          {
            *(_QWORD *)&v53 = 0;
            qfree();
          }
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            qfree();
          }
          clear_tinfo_t();
          if ( !v45 )
            goto LABEL_40;
          goto LABEL_51;
        }
        clear_tinfo_t();
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree();
        }
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
        clear_tinfo_t();
LABEL_23:
        v23 = sub_3884D0((__int64)&dest, (__int64)"Please enter variable name");
        if ( !(_BYTE)v23 )
          goto LABEL_39;
LABEL_24:
        a4 = v48;
        v42 = v48;
        if ( !(_QWORD)v48 )
          goto LABEL_7;
        v17 = (const char *)dest;
        v18 = s1;
        if ( *(_QWORD *)(a2 + 40) )
          goto LABEL_9;
      }
    }
    v23 = 0;
LABEL_39:
    if ( v45 )
    {
LABEL_51:
      v29 = *(_QWORD *)(a1 + 32);
      if ( v29 )
      {
        *(_DWORD *)(v29 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
          sub_395FD0(a1, 0, 0.0, (__int64)a3, a4, a5);
      }
    }
LABEL_40:
    if ( dest )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
  }
  return v23;
}

