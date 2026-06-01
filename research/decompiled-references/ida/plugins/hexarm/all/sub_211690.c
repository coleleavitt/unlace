unsigned __int64 __fastcall sub_211690(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v5; // ebp
  int v6; // esi
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // r12d
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  int v18; // edx
  int v19; // eax
  _DWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  size_t v23; // r8
  char *v24; // r15
  size_t v25; // rax
  size_t v26; // r8
  int v27; // eax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rbp
  int v31; // eax
  _DWORD *v33; // rsi
  int v34; // eax
  char *v35; // rax
  int v36; // eax
  void *v37; // rdi
  size_t v38; // rdx
  char *v39; // r15
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-2D0h]
  size_t v42; // [rsp+8h] [rbp-2D0h]
  size_t v43; // [rsp+8h] [rbp-2D0h]
  size_t v44; // [rsp+18h] [rbp-2C0h]
  size_t v45; // [rsp+18h] [rbp-2C0h]
  char *s; // [rsp+20h] [rbp-2B8h] BYREF
  __int128 v47; // [rsp+28h] [rbp-2B0h]
  __int64 (__fastcall **v48)(); // [rsp+40h] [rbp-298h] BYREF
  int v49; // [rsp+48h] [rbp-290h]
  __int64 v50; // [rsp+50h] [rbp-288h]
  __int128 v51; // [rsp+58h] [rbp-280h]
  __int64 v52; // [rsp+68h] [rbp-270h]
  __int128 v53; // [rsp+70h] [rbp-268h]
  __int64 v54; // [rsp+80h] [rbp-258h]
  _BYTE v55[520]; // [rsp+90h] [rbp-248h] BYREF
  unsigned __int64 v56; // [rsp+298h] [rbp-40h]

  v2 = 0;
  v56 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( (unsigned __int8)sub_36E6F0(a1) )
  {
    v2 = *(_QWORD *)(a1 + 464);
    if ( v2 )
    {
      v33 = (_DWORD *)sub_13CCC0((_QWORD *)a1, 0);
      v34 = v33[6];
      if ( (v34 & 4) == 0 && ((v34 & 0x20000) == 0 || (unsigned int)(*v33 - 3) > 1) )
        sub_214110(a1, v33, "this", 4);
      v2 = 1;
    }
  }
  v48 = (__int64 (__fastcall **)())&off_4D96D8;
  v49 = 2;
  v50 = 0;
  v52 = 0;
  v54 = a2;
  v51 = 0;
  v53 = 0;
  sub_255E40(&v48, a2 + 16, 0);
  v5 = *(_QWORD *)(a1 + 464);
  if ( v2 < v5 )
  {
    do
    {
      v6 = v2++;
      v7 = (_DWORD *)sub_13CCC0((_QWORD *)a1, v6);
      v8 = v7[6];
      if ( (v8 & 4) == 0 && ((v8 & 0x20000) == 0 || (unsigned int)(*v7 - 3) > 1) )
      {
        qsnprintf();
        sub_214110(a1, v7, v55, 4);
      }
    }
    while ( v5 != v2 );
  }
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 136);
  v11 = v10 + *(int *)(a1 + 116);
  v12 = v10 - *(_QWORD *)(a1 + 96);
  v13 = 0;
  if ( *(_QWORD *)(a1 + 440) )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(a1 + 432) + 104 * v13;
      v17 = *(_DWORD *)(v16 + 24);
      if ( (v17 & 0x20000) == 0 || (v18 = *(_DWORD *)v16, (unsigned int)(*(_DWORD *)v16 - 3) > 1) )
      {
        if ( (v17 & 0x100) == 0 )
        {
          if ( *(_DWORD *)v16 != 1
            || (v14 = *(_QWORD *)(v16 + 8), v14 < 0)
            || v12 >= v14 + *(int *)(v16 + 88)
            || v14 >= v11 )
          {
            if ( (v17 & 4) == 0 )
            {
              qsnprintf();
              sub_214110(a1, v16, v55, 4);
            }
          }
        }
        goto LABEL_18;
      }
      if ( (v17 & 4) != 0 )
        goto LABEL_18;
      v19 = *(_DWORD *)(v16 + 8);
      v20 = *(_DWORD **)(a1 + 1504);
      v47 = 0;
      s = nullptr;
      if ( v18 == 4 )
        v19 = (unsigned __int16)v19;
      sub_133330(v20, (__int64 *)&s, v19, *(_DWORD *)(v16 + 88));
      v21 = v47;
      if ( (_QWORD)v47 )
      {
        v22 = v47 + 1;
        v23 = v47 - 1;
        if ( *((_QWORD *)&v47 + 1) >= (unsigned __int64)(v47 + 1) )
        {
          *(_QWORD *)&v47 = v47 + 1;
          s[v21] = 0;
          if ( v21 == 1 )
            goto LABEL_27;
LABEL_47:
          memmove(s + 1, s, v23);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *((_QWORD *)&v47 + 1) > 1u )
        {
          *(_QWORD *)&v47 = 2;
          s[1] = 0;
          goto LABEL_27;
        }
        v23 = 0;
        v22 = 2;
      }
      v44 = v23;
      v41 = v22;
      v35 = (char *)qvector_reserve();
      v23 = v44;
      s = v35;
      *(_QWORD *)&v47 = v41;
      v35[v44 + 1] = 0;
      if ( v44 )
        goto LABEL_47;
LABEL_27:
      *s = 95;
      qstrupr();
      v24 = s;
      if ( s )
      {
        v25 = strlen(s);
        v26 = v25;
        if ( v25 )
        {
          v37 = *(void **)(v16 + 32);
          v38 = v25 + 1;
          if ( *(_QWORD *)(v16 + 48) < v25 + 1 )
          {
            v45 = v25;
            v43 = v25 + 1;
            v40 = qvector_reserve();
            *(_QWORD *)(v16 + 32) = v40;
            v26 = v45;
            v37 = (void *)v40;
            v38 = v43;
          }
          *(_QWORD *)(v16 + 40) = v38;
          v42 = v26;
          memmove(v37, v24, v26);
          *(_BYTE *)(*(_QWORD *)(v16 + 32) + v42) = 0;
          v39 = s;
          *(_DWORD *)(v16 + 24) = *(_DWORD *)(v16 + 24) & 0xFFFDFFFA | 0x20004;
          if ( !v39 )
            goto LABEL_18;
        }
        else
        {
          v27 = *(_DWORD *)(v16 + 24);
          *(_QWORD *)(v16 + 40) = 0;
          *(_DWORD *)(v16 + 24) = v27 & 0xFFFDFFFA | 0x20004;
        }
        *(_QWORD *)&v47 = 0;
        qfree();
      }
      else
      {
        v36 = *(_DWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 40) = 0;
        *(_DWORD *)(v16 + 24) = v36 & 0xFFFDFFFA | 0x20004;
      }
LABEL_18:
      ++v9;
      v15 = *(_QWORD *)(a1 + 440);
      v13 = v9;
      if ( v9 >= v15 )
      {
        if ( v15 )
        {
          v28 = 0;
          v29 = 0;
          do
          {
            v30 = *(_QWORD *)(a1 + 432) + 104 * v29;
            v31 = *(_DWORD *)(v30 + 24);
            if ( (v31 & 1) == 0 && (v31 & 0x20100) == 0 )
            {
              if ( *(_QWORD *)(v30 + 32) )
              {
                *(_QWORD *)(v30 + 40) = 0;
                qfree();
                *(_QWORD *)(v30 + 32) = 0;
                *(_QWORD *)(v30 + 48) = 0;
              }
              if ( *(_DWORD *)(a1 + 480) == v28 )
                *(_DWORD *)(a1 + 4) &= ~0x200u;
            }
            v29 = ++v28;
          }
          while ( (unsigned __int64)v28 < *(_QWORD *)(a1 + 440) );
        }
        break;
      }
    }
  }
  *(_DWORD *)(a1 + 4) |= 3u;
  sub_213D60(a1);
  v48 = off_4D63B8;
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
  return v56 - __readfsqword(0x28u);
}

