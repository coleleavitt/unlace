__int64 __fastcall sub_1C060(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // eax
  bool v9; // r12
  char v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  _DWORD *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 (*v25)(); // rax
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdi
  int v30; // eax
  int v31; // r11d
  unsigned int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // edx
  __int64 result; // rax
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rsi
  _DWORD *v41; // r15
  __int64 v42; // rax
  unsigned int v43; // r8d
  __int64 v44; // rax
  __int64 (*v45)(); // rax
  __int64 v46; // r12
  __int64 v47; // rbp
  int v48; // eax
  int v49; // edx
  int v50; // eax
  __int64 v51; // rdx
  _QWORD *v52; // rbx
  __int64 v53; // rax
  char v54; // [rsp-8h] [rbp-88h]
  unsigned int v55; // [rsp+0h] [rbp-80h]
  unsigned int v56; // [rsp+8h] [rbp-78h]
  int v57; // [rsp+18h] [rbp-68h]
  int v58; // [rsp+1Ch] [rbp-64h]
  __int64 v59; // [rsp+28h] [rbp-58h]
  __int128 v60; // [rsp+30h] [rbp-50h]

  v8 = *(_DWORD *)(a1 + 128);
  v9 = *(_DWORD *)(a1 + 132) == v8;
  *(_QWORD *)(a1 + 16) = 0;
  v11 = v8 <= 0xFFF && v9;
  v59 = 0;
  v60 = 0;
  qlseek();
  if ( a3 == -1 )
    a3 = qlseek();
  v12 = qlsize() - a3;
  v13 = a4;
  if ( ((v12 | a3) & 0x8000000000000000LL) != 0LL )
  {
    v14 = 0;
    a4 = 0;
  }
  else
  {
    if ( !a4 )
    {
      a4 = 0;
      if ( v11 )
      {
LABEL_19:
        v25 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
        if ( v25 != sub_18C30 )
        {
          result = ((__int64 (__fastcall *)(__int64))v25)(a5);
          if ( (_DWORD)result )
            goto LABEL_50;
        }
        v26 = *(_DWORD *)(a1 + 132);
        goto LABEL_21;
      }
LABEL_43:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
      {
        v45 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
        if ( v45 != sub_18C30 )
        {
          result = ((__int64 (__fastcall *)(__int64))v45)(a5);
          if ( (_DWORD)result )
            goto LABEL_50;
          v26 = 512;
LABEL_21:
          if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u || *(_DWORD *)(a1 + 72) == 23126 )
            goto LABEL_22;
LABEL_46:
          if ( a4 > 0 )
          {
LABEL_23:
            v56 = 0;
            v27 = 0;
            v57 = -v26;
            while ( 1 )
            {
              v39 = *(_QWORD *)(a1 + 16);
              v40 = *(_QWORD *)(a1 + 8);
              v41 = (_DWORD *)(v27 + v59);
              v42 = v39 + 1;
              v43 = *(_DWORD *)(v27 + v59 + 20) & v57;
              if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v39 + 1) )
              {
                v58 = *(_DWORD *)(v27 + v59 + 20) & v57;
                v44 = qvector_reserve();
                v39 = *(_QWORD *)(a1 + 16);
                v40 = v44;
                v43 = v58;
                *(_QWORD *)(a1 + 8) = v44;
                v42 = v39 + 1;
              }
              *(_QWORD *)(a1 + 16) = v42;
              v28 = 32 * v39;
              v29 = v40 + v28;
              *(_QWORD *)(v40 + v28) = (unsigned int)v41[3];
              v30 = *(_DWORD *)(a1 + 128);
              if ( !v30 )
                v30 = 1;
              v31 = v41[2];
              if ( !v31 )
                v31 = v41[4];
              v32 = (v30 + v31 - 1) & -v30;
              if ( v32 > v41[4] )
                v32 = v41[4];
              *(_QWORD *)(v40 + v28 + 24) = v32;
              v33 = v41[3] + v32;
              if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
              {
                if ( *(_DWORD *)(a1 + 128) == 4096 || (v34 = *(_DWORD *)(a1 + 132)) == 0 )
                {
                  v36 = -512;
                  v35 = 511;
                }
                else
                {
                  v35 = v34 - 1;
                  v36 = -v34;
                }
                v33 = v36 & (unsigned int)(v35 + v33);
              }
              *(_QWORD *)(v29 + 8) = v33;
              *(_QWORD *)(v29 + 16) = v43;
              if ( *(_DWORD *)(a1 + 72) == 23126 )
                *(_QWORD *)(v29 + 16) = v43 + (__int64)(40 - *(unsigned __int16 *)(a1 + 38));
              result = (**(__int64 (__fastcall ***)(__int64, _DWORD *))a5)(a5, v41);
              if ( (_DWORD)result )
                goto LABEL_50;
              v38 = v41[3] + v41[2];
              if ( v56 >= v38 )
                v38 = v56;
              v27 += 40;
              v56 = v38;
              if ( 40LL * a4 == v27 )
                goto LABEL_71;
            }
          }
LABEL_47:
          if ( !a4 || v11 )
          {
            v46 = qlsize();
            v47 = *(unsigned int *)(a1 + 152);
            if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
            {
              if ( *(_DWORD *)(a1 + 128) == 4096 || (v48 = *(_DWORD *)(a1 + 132)) == 0 )
              {
                v50 = -512;
                v49 = 511;
              }
              else
              {
                v49 = v48 - 1;
                v50 = -v48;
              }
              v47 = v50 & (unsigned int)(v49 + v47);
            }
            v51 = *(_QWORD *)(a1 + 16);
            v52 = *(_QWORD **)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v51 + 1) )
            {
              v53 = qvector_reserve();
              *(_QWORD *)(a1 + 8) = v53;
              v51 = *(_QWORD *)(a1 + 16);
              v52 = (_QWORD *)v53;
            }
            memmove(v52 + 4, v52, 32 * v51);
            *v52 = 0;
            result = 0;
            v52[1] = v47;
            v52[2] = 0;
            v52[3] = v46;
            ++*(_QWORD *)(a1 + 16);
          }
          else
          {
            result = 0;
          }
          goto LABEL_50;
        }
      }
      else if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
      {
        v26 = 512;
        goto LABEL_46;
      }
LABEL_22:
      v26 = 1;
      if ( a4 > 0 )
        goto LABEL_23;
      v56 = 0;
LABEL_71:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
        *(_DWORD *)(a1 + 152) = v56;
      goto LABEL_47;
    }
    if ( (unsigned __int64)a4 <= 0x666666666666666LL && v12 >= 40LL * a4 )
      goto LABEL_11;
    a4 = v12 / 0x28;
    v14 = a4;
  }
  if ( (unsigned int)sub_14DE0(
                       1u,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "Number of sections",
                       v13,
                       v14,
                       ". Do you want to continue with the new value?") != 1 )
    sub_1BE60(
      0,
      (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
      v15,
      v16,
      v17,
      v18,
      v54);
  if ( a4 <= 0 )
  {
LABEL_18:
    if ( v11 )
      goto LABEL_19;
    goto LABEL_43;
  }
LABEL_11:
  v19 = 0;
  while ( 1 )
  {
    v21 = v60;
    v22 = v59;
    v23 = v60 + 1;
    if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
    {
      v24 = qvector_reserve();
      v21 = v60;
      v59 = v24;
      v22 = v24;
      v23 = v60 + 1;
    }
    *(_QWORD *)&v60 = v23;
    v20 = (_DWORD *)(v22 + 40 * v21);
    if ( qlread() != 40 )
      break;
    if ( v20[3] == v20[5] )
    {
      ++v19;
      v11 &= v20[4] >= v20[2];
      if ( v19 >= a4 )
        goto LABEL_18;
    }
    else
    {
      ++v19;
      v11 = 0;
      if ( v19 >= a4 )
        goto LABEL_18;
    }
  }
  result = 0xFFFFFFFFLL;
LABEL_50:
  if ( v59 )
  {
    v55 = result;
    qfree();
    return v55;
  }
  return result;
}

