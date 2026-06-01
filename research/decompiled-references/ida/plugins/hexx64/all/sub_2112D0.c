unsigned __int64 __fastcall sub_2112D0(__int64 a1, __int64 a2, double a3)
{
  int v3; // r15d
  int v6; // ebp
  int v7; // esi
  _DWORD *v8; // rbx
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  int v18; // eax
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  size_t v24; // r8
  char *v25; // r15
  size_t v26; // rax
  size_t v27; // r8
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // eax
  __int64 v34; // rdi
  _DWORD *v35; // rsi
  int v36; // eax
  char *v37; // rax
  int v38; // eax
  void *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-2D0h]
  size_t v43; // [rsp+8h] [rbp-2D0h]
  __int64 v44; // [rsp+8h] [rbp-2D0h]
  size_t v45; // [rsp+18h] [rbp-2C0h]
  size_t v46; // [rsp+18h] [rbp-2C0h]
  char *s; // [rsp+20h] [rbp-2B8h] BYREF
  __int128 v48; // [rsp+28h] [rbp-2B0h]
  __int64 (__fastcall **v49)(); // [rsp+40h] [rbp-298h] BYREF
  int v50; // [rsp+48h] [rbp-290h]
  __int64 v51; // [rsp+50h] [rbp-288h]
  __int128 v52; // [rsp+58h] [rbp-280h]
  __int64 v53; // [rsp+68h] [rbp-270h]
  __int128 v54; // [rsp+70h] [rbp-268h]
  __int64 v55; // [rsp+80h] [rbp-258h]
  char v56[520]; // [rsp+90h] [rbp-248h] BYREF
  unsigned __int64 v57; // [rsp+298h] [rbp-40h]

  v3 = 0;
  v57 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( (unsigned __int8)sub_36E1B0(a1) )
  {
    v3 = *(_QWORD *)(a1 + 464);
    if ( v3 )
    {
      v35 = (_DWORD *)sub_13D280((_QWORD *)a1, 0, a3);
      v36 = v35[6];
      if ( (v36 & 4) == 0 && ((v36 & 0x20000) == 0 || (unsigned int)(*v35 - 3) > 1) )
        sub_213D50((_QWORD *)a1, (__int64)v35, "this", 4);
      v3 = 1;
    }
  }
  v49 = (__int64 (__fastcall **)())&off_4DF018;
  v50 = 2;
  v51 = 0;
  v53 = 0;
  v55 = a2;
  v52 = 0;
  v54 = 0;
  sub_255A80((__int64 *)&v49, a2 + 16, 0);
  v6 = *(_QWORD *)(a1 + 464);
  if ( v3 < v6 )
  {
    do
    {
      v7 = v3++;
      v8 = (_DWORD *)sub_13D280((_QWORD *)a1, v7, 0.0);
      v9 = v8[6];
      if ( (v9 & 4) == 0 && ((v9 & 0x20000) == 0 || (unsigned int)(*v8 - 3) > 1) )
      {
        qsnprintf();
        sub_213D50((_QWORD *)a1, (__int64)v8, v56, 4);
      }
    }
    while ( v6 != v3 );
  }
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 136);
  v12 = v11 + *(int *)(a1 + 116);
  v13 = v11 - *(_QWORD *)(a1 + 96);
  v14 = 0;
  if ( *(_QWORD *)(a1 + 440) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 432) + 104 * v14;
      v18 = *(_DWORD *)(v17 + 24);
      if ( (v18 & 0x20000) == 0 || (v19 = *(_DWORD *)v17, (unsigned int)(*(_DWORD *)v17 - 3) > 1) )
      {
        if ( (v18 & 0x100) == 0 )
        {
          if ( *(_DWORD *)v17 != 1
            || (v15 = *(_QWORD *)(v17 + 8), v15 < 0)
            || v13 >= v15 + *(int *)(v17 + 88)
            || v15 >= v12 )
          {
            if ( (v18 & 4) == 0 )
            {
              qsnprintf();
              sub_213D50((_QWORD *)a1, v17, v56, 4);
            }
          }
        }
        goto LABEL_18;
      }
      if ( (v18 & 4) != 0 )
        goto LABEL_18;
      v20 = *(_DWORD *)(v17 + 8);
      v21 = *(_DWORD **)(a1 + 1504);
      v48 = 0;
      s = nullptr;
      if ( v19 == 4 )
        v20 = (unsigned __int16)v20;
      sub_1338F0(v21, (__int64 *)&s, v20, *(_DWORD *)(v17 + 88));
      v22 = v48;
      if ( (_QWORD)v48 )
      {
        v23 = v48 + 1;
        v24 = v48 - 1;
        if ( *((_QWORD *)&v48 + 1) >= (unsigned __int64)(v48 + 1) )
        {
          *(_QWORD *)&v48 = v48 + 1;
          s[v22] = 0;
          if ( v22 == 1 )
            goto LABEL_27;
LABEL_47:
          memmove(s + 1, s, v24);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *((_QWORD *)&v48 + 1) > 1u )
        {
          *(_QWORD *)&v48 = 2;
          s[1] = 0;
          goto LABEL_27;
        }
        v24 = 0;
        v23 = 2;
      }
      v45 = v24;
      v42 = v23;
      v37 = (char *)qvector_reserve((__int64)&s, (__int64)s, v23, 1);
      v24 = v45;
      s = v37;
      *(_QWORD *)&v48 = v42;
      v37[v45 + 1] = 0;
      if ( v45 )
        goto LABEL_47;
LABEL_27:
      *s = 95;
      qstrupr();
      v25 = s;
      if ( s )
      {
        v26 = strlen(s);
        v27 = v26;
        if ( v26 )
        {
          v39 = *(void **)(v17 + 32);
          v40 = v26 + 1;
          if ( *(_QWORD *)(v17 + 48) < v26 + 1 )
          {
            v46 = v26;
            v44 = v26 + 1;
            v41 = qvector_reserve(v17 + 32, (__int64)v39, v40, 1);
            *(_QWORD *)(v17 + 32) = v41;
            v27 = v46;
            v39 = (void *)v41;
            v40 = v44;
          }
          *(_QWORD *)(v17 + 40) = v40;
          v43 = v27;
          memmove(v39, v25, v27);
          *(_BYTE *)(*(_QWORD *)(v17 + 32) + v43) = 0;
          v25 = s;
          *(_DWORD *)(v17 + 24) = *(_DWORD *)(v17 + 24) & 0xFFFDFFFA | 0x20004;
          if ( !v25 )
            goto LABEL_18;
        }
        else
        {
          v28 = *(_DWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 40) = 0;
          *(_DWORD *)(v17 + 24) = v28 & 0xFFFDFFFA | 0x20004;
        }
        *(_QWORD *)&v48 = 0;
        qfree((__int64)v25);
      }
      else
      {
        v38 = *(_DWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 40) = 0;
        *(_DWORD *)(v17 + 24) = v38 & 0xFFFDFFFA | 0x20004;
      }
LABEL_18:
      ++v10;
      v16 = *(_QWORD *)(a1 + 440);
      v14 = v10;
      if ( v10 >= v16 )
      {
        if ( v16 )
        {
          v29 = 0;
          v30 = 0;
          do
          {
            v31 = *(_QWORD *)(a1 + 432) + 104 * v30;
            v32 = *(_DWORD *)(v31 + 24);
            if ( (v32 & 1) == 0 && (v32 & 0x20100) == 0 )
            {
              v34 = *(_QWORD *)(v31 + 32);
              if ( v34 )
              {
                *(_QWORD *)(v31 + 40) = 0;
                qfree(v34);
                *(_QWORD *)(v31 + 32) = 0;
                *(_QWORD *)(v31 + 48) = 0;
              }
              if ( *(_DWORD *)(a1 + 480) == v29 )
                *(_DWORD *)(a1 + 4) &= ~0x200u;
            }
            v30 = ++v29;
          }
          while ( (unsigned __int64)v29 < *(_QWORD *)(a1 + 440) );
        }
        break;
      }
    }
  }
  *(_DWORD *)(a1 + 4) |= 3u;
  sub_2139A0((_QWORD *)a1);
  v49 = off_4DBCF8;
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  return v57 - __readfsqword(0x28u);
}

