unsigned __int64 __fastcall sub_1AF720(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  void *v12; // rdi
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v29; // [rsp+18h] [rbp-1C0h]
  __int64 v30; // [rsp+28h] [rbp-1B0h]
  __int64 v31; // [rsp+28h] [rbp-1B0h]
  __int64 n; // [rsp+38h] [rbp-1A0h]
  __int64 v33; // [rsp+40h] [rbp-198h] BYREF
  __int128 v34; // [rsp+48h] [rbp-190h]
  __int64 v35; // [rsp+60h] [rbp-178h] BYREF
  __int128 v36; // [rsp+68h] [rbp-170h]
  __int64 v37[2]; // [rsp+80h] [rbp-158h] BYREF
  _QWORD v38[4]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v39[2]; // [rsp+B0h] [rbp-128h] BYREF
  _QWORD v40[4]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v41[2]; // [rsp+E0h] [rbp-F8h] BYREF
  void *src; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-E0h]
  __int64 v44[2]; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+128h] [rbp-B0h]
  __int64 v47[2]; // [rsp+140h] [rbp-98h] BYREF
  void *v48; // [rsp+150h] [rbp-88h] BYREF
  __int128 v49; // [rsp+158h] [rbp-80h]
  __int64 v50[2]; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v51[3]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+198h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 8);
  v52 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 8) = a1;
  v28 = v6;
  sub_1201C0((__int64)v37, *(_QWORD *)(a1 + 520), a4, 1u);
  sub_1201C0((__int64)v39, *(_QWORD *)(a1 + 520), a4, 0);
  v33 = 0;
  v35 = 0;
  v34 = 0;
  v36 = 0;
  sub_1AF600(v39, &v33, a3);
  if ( sub_11E770((__int64)v37, (__int64)v39) )
  {
    sub_602C0(v37, v39, v8, v9, v10, v11);
    sub_312B60(v38, v40);
    sub_1AF600(v37, &v35, a3);
    sub_60500(v39);
  }
  sub_F6610(a2);
  sub_123560((__int64)v41, *(_QWORD *)(a1 + 520), a4, 1);
  if ( !(unsigned __int8)sub_60500(v41) || v43 )
  {
    sub_123560((__int64)v44, *(_QWORD *)(a1 + 520), a4, 0);
    *(_QWORD *)&v34 = 0;
    sub_1AF600(v44, &v33, a3);
    sub_F6610(a2);
    if ( sub_11E770((__int64)v41, (__int64)v44) )
    {
      if ( !(unsigned __int8)sub_60500(v44) || v46 )
      {
        v16 = a2[1];
        v17 = 2;
        if ( v16 )
          v17 = v16-- + 1;
        v18 = *a2;
        if ( a2[2] < v17 )
        {
          v31 = v16;
          v29 = v17;
          v26 = qvector_reserve();
          *a2 = v26;
          v16 = v31;
          v18 = v26;
          v17 = v29;
        }
        a2[1] = v17;
        *(_BYTE *)(v18 + v16) = 44;
        *(_BYTE *)(*a2 + v16 + 1) = 0;
        sub_602C0(v41, v44, v17, v14, v16, v15);
        sub_312B60(&src, &v45);
      }
      *(_QWORD *)&v36 = 0;
      sub_1AF600(v41, &v35, a3);
      sub_F6610(a2);
      sub_5FC80(v47, (__int64)v41);
      v48 = nullptr;
      v49 = 0;
      if ( v43 )
      {
        v30 = v43;
        n = 16 * v43;
        v48 = (void *)qalloc_or_throw();
        *((_QWORD *)&v49 + 1) = v30;
        memcpy(v48, src, n);
        *(_QWORD *)&v49 = v30;
      }
      sub_123560((__int64)v50, *(_QWORD *)(a1 + 520), a4, 129);
      sub_602C0(v47, v50, v19, v20, v21, v22);
      sub_312B60(&v48, v51);
      if ( v51[0] )
      {
        v51[1] = 0;
        qfree();
      }
      qfree();
      if ( !(unsigned __int8)sub_60500(v47) || (_QWORD)v49 )
      {
        v23 = a2[1];
        v24 = 2;
        if ( v23 )
          v24 = v23-- + 1;
        v25 = *a2;
        if ( a2[2] < v24 )
        {
          v27 = qvector_reserve();
          *a2 = v27;
          v25 = v27;
        }
        a2[1] = v24;
        *(_BYTE *)(v25 + v23) = 44;
        *(_BYTE *)(*a2 + v23 + 1) = 0;
        *(_QWORD *)&v36 = 0;
        sub_1AF600(v47, &v35, a3);
        sub_F6610(a2);
      }
      if ( v48 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
      }
      qfree();
    }
    if ( v45 )
    {
      v46 = 0;
      qfree();
    }
    qfree();
  }
  v12 = src;
  *(_QWORD *)(a3 + 8) = v28;
  if ( v12 )
  {
    v43 = 0;
    qfree();
  }
  qfree();
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  if ( v40[0] )
  {
    v40[1] = 0;
    qfree();
  }
  qfree();
  if ( v38[0] )
  {
    v38[1] = 0;
    qfree();
  }
  qfree();
  return v52 - __readfsqword(0x28u);
}

