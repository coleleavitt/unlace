__int64 __fastcall sub_8A5C0(__int64 *a1, __int64 a2, void **a3, _DWORD *a4)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  size_t v10; // r10
  __int64 v11; // r9
  unsigned __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rdx
  void *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-A8h]
  __int64 v22; // [rsp+8h] [rbp-A8h]
  size_t na; // [rsp+10h] [rbp-A0h]
  size_t n; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+18h] [rbp-98h]
  unsigned __int64 v26; // [rsp+18h] [rbp-98h]
  __int64 v28; // [rsp+28h] [rbp-88h]
  __int64 v29; // [rsp+38h] [rbp-78h] BYREF
  void *v30; // [rsp+40h] [rbp-70h] BYREF
  size_t v31; // [rsp+48h] [rbp-68h] BYREF
  __int64 v32; // [rsp+50h] [rbp-60h] BYREF
  __int128 v33; // [rsp+58h] [rbp-58h]
  _BYTE v34[3]; // [rsp+75h] [rbp-3Bh] BYREF
  unsigned __int64 v35[7]; // [rsp+78h] [rbp-38h] BYREF

  v35[0] = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  v6 = a2 - 1;
  if ( (debug & 0x400000) == 0 )
  {
    if ( v6 < a1[14] )
      goto LABEL_4;
    return (unsigned int)-1;
  }
  sub_88B80((__int64)"mem_load_section(obj=%p, section_index=%llu).\n", a1, a2);
  if ( v6 >= a1[14] )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"No such section.\n");
    return (unsigned int)-1;
  }
LABEL_4:
  v7 = a1[13];
  v8 = *a1;
  v32 = 0;
  v28 = v7;
  v33 = 0;
  if ( (unsigned __int8)sub_8A270(&v32, &v29, v8) )
  {
    v9 = pack_dw(v34, v35, (unsigned __int16)(a2 - 1)) - (_QWORD)v34;
    v10 = v9;
    if ( !v9 )
      goto LABEL_19;
    v11 = v33;
    v12 = v33 + v9;
    if ( __CFADD__((_QWORD)v33, v9) )
    {
      if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_18;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = v32;
    v14 = v33;
    if ( *((_QWORD *)&v33 + 1) < v12 )
    {
      v22 = v33;
      n = v10;
      v26 = v12;
      v32 = qvector_reserve(&v32, v32, v12, 1);
      v13 = v32;
      v14 = v33;
      v11 = v22;
      v10 = n;
      v12 = v26;
    }
    v21 = v11;
    na = v10;
    v25 = v12;
    memset((void *)(v13 + v14), 0, v12 - v14);
    v10 = na;
    v11 = v21;
    *(_QWORD *)&v33 = v25;
LABEL_18:
    memcpy((void *)(v11 + v32), v34, v10);
LABEL_19:
    v30 = nullptr;
    v31 = 0;
    v15 = sub_69510(dbg, 37, 16777218, v32, (_QWORD)v33, &v30, &v31);
    if ( v15 )
    {
      sub_17110((__int64)"Received IOCTL failure code: %d.\n");
    }
    else
    {
      v17 = v28 + 120 * v6;
      v18 = *(unsigned int *)(v17 + 8);
      if ( v18 == v31 )
      {
        v19 = src;
        if ( *(_QWORD *)(v17 + 24) )
          v19 = *(const char **)(v17 + 16);
        v20 = (void *)sub_832E0(a1, a2, v19, v18);
        if ( v20 )
        {
          *a3 = memmove(v20, v30, v31);
          if ( (debug & 0x400000) != 0 )
            sub_88B80((__int64)"Section loaded (%zu bytes).\n", v31);
          goto LABEL_26;
        }
        *a4 = 8;
        sub_17110((__int64)"Couldn't allocate %zu bytes of data for section.\n");
      }
      else
      {
        sub_17110((__int64)"Unexpected data size.\n");
      }
    }
    v15 = 1;
LABEL_26:
    if ( v30 )
    {
      qfree(v30);
      v30 = nullptr;
    }
    goto LABEL_28;
  }
  sub_17110((__int64)"Couldn't set file path.\n");
  v15 = 1;
LABEL_28:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v15;
}
