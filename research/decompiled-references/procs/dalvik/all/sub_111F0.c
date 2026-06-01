__int64 __fastcall sub_111F0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned int v25; // ebx
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  struct _Unwind_Exception *v39; // rbx
  __int64 v40; // [rsp-8h] [rbp-168h]
  unsigned int v41; // [rsp+4h] [rbp-15Ch]
  unsigned __int64 v42; // [rsp+8h] [rbp-158h]
  unsigned __int64 v43; // [rsp+8h] [rbp-158h]
  __int64 v44; // [rsp+8h] [rbp-158h]
  char *v45; // [rsp+18h] [rbp-148h] BYREF
  __int128 v46; // [rsp+20h] [rbp-140h]
  unsigned __int64 *v47; // [rsp+38h] [rbp-128h] BYREF
  __int128 v48; // [rsp+40h] [rbp-120h]
  _DWORD v49[50]; // [rsp+58h] [rbp-108h] BYREF
  unsigned __int64 v50; // [rsp+120h] [rbp-40h] BYREF

  v3 = (unsigned __int64 *)a1[23];
  v50 = __readfsqword(0x28u);
  v5 = a1[24];
  v46 = 0;
  v45 = nullptr;
  v6 = v3 + 15;
  v7 = (unsigned int)sub_C5C0((__int64)(v3 + 15), v5) - 1;
  if ( v7 >= v3[22] )
  {
    ((void (*)(void))sub_100C0)();
    goto LABEL_49;
  }
  sub_C8C0((__int64)&v45, *(_QWORD *)(v3[21] + 8 * v7), a2, 0x55u);
  v8 = nullptr;
  if ( (unsigned __int8)sub_10D30((__int64)&v45, 0, (__int64)"Rename Type ID %zu", a2) )
  {
    if ( (unsigned __int64)v46 <= 1 )
    {
      v21 = (unsigned __int64 *)a1[23];
      v5 = a1[24];
      v6 = v21 + 15;
      v22 = (unsigned int)sub_C5C0((__int64)(v21 + 15), v5) - 1;
      if ( v22 >= v21[22] )
        goto LABEL_51;
      sub_C8C0((__int64)&v45, *(_QWORD *)(v21[21] + 8 * v22), a2, 0x56u);
    }
    else if ( !sub_11160(v45) )
    {
      v8 = "This does not look like a sane type defintion.\nAre you sure?";
      if ( (unsigned int)sub_AB00(0, (__int64)"This does not look like a sane type defintion.\nAre you sure?") != 1 )
        goto LABEL_11;
    }
    v9 = (unsigned __int64 *)a1[23];
    v5 = a1[24];
    v6 = v9 + 15;
    v10 = (unsigned int)sub_C5C0((__int64)(v9 + 15), v5) - 1;
    if ( v10 < v9[22] )
    {
      sub_C7C0(*(_QWORD *)(v9[21] + 8 * v10), a2, (__int64)&v45, 0x55u);
      v15 = (char *)&unk_1A378;
      if ( (_QWORD)v46 )
        v15 = v45;
      if ( *v15 != 76 )
        goto LABEL_9;
      v5 = a1[24];
      v41 = sub_C5C0(a1[23] + 120LL, v5);
      v23 = a1[23];
      memset(v49, 0, sizeof(v49));
      v6 = &v50;
      v12 = 0;
      v24 = *(_QWORD *)(v23 + 176);
      if ( v41 == -1 )
      {
        if ( !v24 )
          goto LABEL_9;
        v27 = 0;
        v25 = 1;
        v26 = 0;
      }
      else
      {
        v11 = v41;
        v25 = v41;
        if ( v24 < v41 )
          goto LABEL_9;
        v26 = v41 - 1;
        if ( v26 >= v24 )
        {
LABEL_54:
          sub_100C0(v6, v5, v26);
LABEL_55:
          sub_100C0(v6, v5, v11);
LABEL_56:
          v39 = (struct _Unwind_Exception *)sub_100C0(v6, v5, v11);
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree(v47, (const char *)v5);
          }
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v45, (const char *)v5);
          }
          _Unwind_Resume(v39);
        }
        v27 = 8 * v26;
      }
      v5 = 77;
      v42 = v26;
      v6 = *(unsigned __int64 **)(*(_QWORD *)(v23 + 168) + v27);
      v28 = netnode_supfirst(v6, 77);
      v11 = v42;
      v29 = v28;
      if ( v28 != -1 )
      {
        if ( v42 < *(_QWORD *)(v23 + 176) )
        {
          v5 = (unsigned int)v28;
          v6 = *(unsigned __int64 **)(*(_QWORD *)(v23 + 168) + v27);
          v30 = netnode_supval(v6, (unsigned int)v28, v49, 200, 77);
          while ( v30 > 199 && v41 == v25 )
          {
            if ( (v49[0] & 2) != 0 && v49[4] == a2 )
            {
              v36 = a1[23];
              v47 = nullptr;
              v48 = 0;
              sub_CE40((_QWORD *)(v36 + 120), (__int64)&v47, (__int64)v49, v12, v13, v14);
              v5 = (unsigned __int64)&unk_150C8;
              if ( (_QWORD)v48 )
                v5 = (unsigned __int64)v47;
              rename_entry(v49[5], v5, 0);
              v6 = v47;
              if ( v47 )
              {
                *(_QWORD *)&v48 = 0;
                qfree(v47, (const char *)v5);
              }
            }
            v31 = a1[23];
            v32 = v25;
            v33 = *(_QWORD *)(v31 + 176);
            if ( v33 < v25 )
              break;
            v34 = v25 - 1;
            if ( v34 >= v33 )
              goto LABEL_50;
            v5 = v29;
            v43 = v25 - 1;
            v6 = *(unsigned __int64 **)(*(_QWORD *)(v31 + 168) + 8 * v34);
            v29 = netnode_supnext(v6, v29, 77);
            v35 = *(_QWORD *)(v31 + 176);
            if ( v29 == -1 )
            {
              if ( ++v25 == -1 )
              {
                if ( !v35 )
                  goto LABEL_9;
                v37 = 0;
                v25 = 1;
                v32 = 0;
              }
              else
              {
                v11 = v25;
                if ( v35 < v25 )
                  goto LABEL_9;
                if ( v32 >= v35 )
                  goto LABEL_56;
                v37 = 8 * v32;
              }
              v5 = 77;
              v44 = v37;
              v6 = *(unsigned __int64 **)(*(_QWORD *)(v31 + 168) + v37);
              v38 = netnode_supfirst(v6, 77);
              v11 = v44;
              v29 = v38;
              if ( v38 == -1 )
                goto LABEL_9;
              if ( v32 >= *(_QWORD *)(v31 + 176) )
                goto LABEL_55;
              v5 = (unsigned int)v38;
              v6 = *(unsigned __int64 **)(*(_QWORD *)(v31 + 168) + v44);
              v30 = netnode_supval(v6, (unsigned int)v38, v49, 200, 77);
            }
            else
            {
              if ( v43 >= v35 )
                goto LABEL_52;
              v5 = (unsigned int)v29;
              v6 = *(unsigned __int64 **)(*(_QWORD *)(v31 + 168) + 8 * v43);
              v30 = netnode_supval(v6, (unsigned int)v29, v49, 200, 77);
            }
          }
          goto LABEL_9;
        }
        goto LABEL_53;
      }
LABEL_9:
      v8 = (const char *)a1[5];
      ((void (__fastcall *)(__int64, const char *, __int64, __int64, __int64, __int64))callui)(
        78,
        v8,
        v11,
        v12,
        v13,
        v14);
      callui(15, v8, v16, v17, v18, v19, v40);
      goto LABEL_12;
    }
LABEL_49:
    ((void (*)(void))sub_100C0)();
LABEL_50:
    ((void (*)(void))sub_100C0)();
LABEL_51:
    ((void (*)(void))sub_100C0)();
LABEL_52:
    ((void (*)(void))sub_100C0)();
LABEL_53:
    sub_100C0(v6, v5, v11);
    goto LABEL_54;
  }
LABEL_11:
  a2 = -1;
LABEL_12:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v8);
  }
  return a2;
}
