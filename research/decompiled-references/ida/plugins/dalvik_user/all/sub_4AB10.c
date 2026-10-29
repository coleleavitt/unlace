__int64 __fastcall sub_4AB10(
        unsigned __int64 a1,
        const char *a2,
        int a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  double v11; // xmm4_8
  __m128 v12; // xmm5
  size_t v13; // r15
  size_t v14; // rbp
  __int16 v15; // r15
  __int64 v16; // rdi
  char v17; // bp
  const char *v18; // rax
  const char *v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  unsigned int v22; // ebx
  unsigned __int64 v23; // rax
  char v24; // al
  void *v26; // rdi
  size_t v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  void *src; // [rsp+10h] [rbp-138h]
  __int64 v32; // [rsp+30h] [rbp-118h] BYREF
  void *v33; // [rsp+38h] [rbp-110h]
  __int128 v34; // [rsp+40h] [rbp-108h]
  __int16 v35; // [rsp+50h] [rbp-F8h]
  __int64 v36; // [rsp+58h] [rbp-F0h]
  __int128 v37; // [rsp+60h] [rbp-E8h]
  __int64 v38; // [rsp+70h] [rbp-D8h]
  __int128 v39; // [rsp+78h] [rbp-D0h]
  __int64 v40; // [rsp+88h] [rbp-C0h]
  __int128 v41; // [rsp+90h] [rbp-B8h]
  __int16 v42; // [rsp+A0h] [rbp-A8h]
  __int64 v43; // [rsp+A8h] [rbp-A0h]
  __int128 v44; // [rsp+B0h] [rbp-98h]
  __int64 v45; // [rsp+C0h] [rbp-88h]
  __int128 v46; // [rsp+C8h] [rbp-80h]
  __int64 v47; // [rsp+D8h] [rbp-70h]
  __int64 v48; // [rsp+E0h] [rbp-68h]
  int v49; // [rsp+E8h] [rbp-60h]
  char s2[14]; // [rsp+F9h] [rbp-4Fh] BYREF
  char v51; // [rsp+107h] [rbp-41h]
  unsigned __int64 v52; // [rsp+108h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  qmutex_lock();
  if ( byte_7FBE9 )
    sub_11340((__int64)"JDWP: connect(%s, %d)\n", a2, a3);
  if ( *(_BYTE *)(a1 + 32) )
  {
    sub_4A220(a1);
    sub_5D660(a1 + 40, 0xFFFFFFFFLL);
    sub_44380(a1, a5, a6, a7, a8, v11, v12);
  }
  *(_QWORD *)(a1 + 40) = sub_5D580(0);
  src = nullptr;
  if ( a2 )
  {
    v13 = strlen(a2);
    src = (void *)qvector_reserve();
    memmove(src, a2, v13);
    *((_BYTE *)src + v13) = 0;
    v14 = v13 + 1;
    v15 = a3;
    v32 = 192;
    v33 = nullptr;
    v34 = 0;
    if ( v14 )
    {
      v33 = (void *)qalloc_or_throw();
      *((_QWORD *)&v34 + 1) = v14;
      memcpy(v33, src, v14);
      *(_QWORD *)&v34 = v14;
    }
  }
  else
  {
    v32 = 192;
    v15 = a3;
    v33 = nullptr;
    v34 = 0;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v35 = v15;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = -1;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v44 = 0;
  v46 = 0;
  v17 = sub_5D5F0(v16, &v32);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  if ( src )
    qfree();
  if ( v17 )
  {
    v23 = sub_5D7A0(*(_QWORD *)(a1 + 40), "JDWP-Handshake", 14);
    if ( v23 <= 0xD )
    {
      sub_44B20(a1);
    }
    else if ( v23 == 14 )
    {
      v28 = sub_5D6A0(*(_QWORD *)(a1 + 40), s2, 14, 10000);
      v29 = v28;
      if ( v28 <= 0xD )
      {
        sub_44B20(a1);
        v51 = 0;
        if ( !v29 )
        {
          sub_11270((__int64)"The connection has been gracefully closed by peer.\n"
                             "Check that IDA is the only debugger for the target.");
          goto LABEL_30;
        }
      }
      else
      {
        v51 = 0;
        if ( v28 == 14 && !strcmp("JDWP-Handshake", s2) )
        {
          *(_BYTE *)(a1 + 32) = 1;
          if ( (unsigned __int8)sub_49400(a1) && (unsigned __int8)sub_4A370((unsigned __int32 *)a1) )
          {
            sub_4A8A0((bool *)a1);
            *(_BYTE *)(a1 + 32) = 1;
            goto LABEL_27;
          }
          *(_BYTE *)(a1 + 32) = 0;
          goto LABEL_32;
        }
      }
      if ( *(_BYTE *)(a1 + 56) )
        sub_11270((__int64)"Check that port %d is free for IDA debugger.", a3);
    }
LABEL_30:
    v24 = *(_BYTE *)(a1 + 32);
    goto LABEL_31;
  }
  if ( !a4 )
    goto LABEL_30;
  v18 = (const char *)sub_5D5D0(*(_QWORD *)(a1 + 40));
  v19 = v18;
  if ( v18 )
  {
    v20 = strlen(v18);
    v21 = v20;
    if ( v20 )
    {
      v26 = *(void **)a4;
      v27 = v20 + 1;
      if ( *(_QWORD *)(a4 + 16) < v20 + 1 )
      {
        v30 = qvector_reserve();
        *(_QWORD *)a4 = v30;
        v26 = (void *)v30;
      }
      *(_QWORD *)(a4 + 8) = v27;
      memmove(v26, v19, v21);
      *(_BYTE *)(*(_QWORD *)a4 + v21) = 0;
      v24 = *(_BYTE *)(a1 + 32);
LABEL_31:
      if ( v24 )
        goto LABEL_27;
LABEL_32:
      sub_5D660(a1 + 40, 0xFFFFFFFFLL);
      v22 = *(unsigned __int8 *)(a1 + 32);
      goto LABEL_33;
    }
  }
  *(_QWORD *)(a4 + 8) = 0;
  if ( !*(_BYTE *)(a1 + 32) )
    goto LABEL_32;
LABEL_27:
  v22 = 1;
LABEL_33:
  qmutex_unlock();
  return v22;
}

