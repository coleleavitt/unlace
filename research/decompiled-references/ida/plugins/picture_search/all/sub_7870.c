__int64 __fastcall sub_7870(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  unsigned int v10; // ebx
  _QWORD *v12; // r12
  _QWORD *v13; // rbp
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64); // rdx
  __int64 *v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // [rsp+0h] [rbp-70h]
  __int64 *v23; // [rsp+18h] [rbp-58h]
  __int128 v24; // [rsp+20h] [rbp-50h]

  v24 = 0;
  v23 = nullptr;
  if ( *(_DWORD *)(a2 + 8) == 35 && (v12 = *(_QWORD **)(a1[2] + 144LL), v12 == *(_QWORD **)(a2 + 40)) )
  {
    v13 = *(_QWORD **)(a2 + 48);
    v10 = 1;
    v22 = &v13[*(_QWORD *)(a2 + 56)];
    if ( v22 == v13 )
      return v10;
    do
    {
      v14 = operator new(0x48u);
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(*v12 + 56LL);
      v16 = (__int64 *)(v12[23] + 16LL * *v13);
      v17 = v16[1];
      if ( v15 == sub_3A70 )
        v18 = *v16;
      else
        v18 = ((__int64 (__fastcall *)(_QWORD *))v15)(v12);
      *(_QWORD *)v14 = qword_ACD8;
      QT::QPixmap::QPixmap((QT::QPixmap *)(v14 + 8));
      *(_QWORD *)(v14 + 32) = v18;
      *(_QWORD *)(v14 + 40) = -1;
      *(_QWORD *)(v14 + 48) = -1;
      *(_QWORD *)(v14 + 56) = v17;
      *(_DWORD *)(v14 + 64) = 3;
      v19 = getseg();
      if ( v19 )
        *(_QWORD *)(v14 + 48) = *(_QWORD *)(v19 + 8);
      else
        sub_5470((__int64)"failed to find segment for picture at: 0x%a\n", 0.0);
      v20 = v23;
      *(_QWORD *)v14 = &off_A738;
      v21 = v24;
      if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
      {
        v23 = (__int64 *)qvector_reserve();
        v20 = v23;
        v21 = v24;
      }
      v20[v21] = v14;
      ++v13;
      v6 = v24 + 1;
      *(_QWORD *)&v24 = v24 + 1;
    }
    while ( v22 != v13 );
  }
  else
  {
    if ( a1[4] > 4u && !(unsigned __int8)sub_50E0((__int64)a1, *(_QWORD *)(a2 + 88)) )
    {
      sub_4E60((__int64)"failed to find picture\n");
      v7 = nullptr;
      v10 = 0;
      goto LABEL_12;
    }
    v2 = operator new(0x48u);
    v3 = a1[4];
    v4 = a1[3];
    *(_QWORD *)v2 = qword_ACD8;
    QT::QPixmap::QPixmap((QT::QPixmap *)(v2 + 8));
    *(_QWORD *)(v2 + 32) = v4;
    *(_QWORD *)(v2 + 40) = -1;
    *(_QWORD *)(v2 + 48) = -1;
    *(_QWORD *)(v2 + 56) = v3;
    *(_DWORD *)(v2 + 64) = 3;
    v5 = getseg();
    if ( v5 )
      *(_QWORD *)(v2 + 48) = *(_QWORD *)(v5 + 8);
    else
      sub_5470((__int64)"failed to find segment for picture at: 0x%a\n", 0.0);
    *(_QWORD *)v2 = &off_A738;
    v23 = (__int64 *)qvector_reserve();
    *v23 = v2;
    v6 = 1;
  }
  v7 = v23;
  v8 = &v23[v6];
  if ( v8 == v23 )
  {
    v10 = 1;
  }
  else
  {
    v9 = v23;
    do
      sub_5D80(*v9++, 0.0);
    while ( v8 != v9 );
    v7 = v23;
    v10 = 1;
  }
LABEL_12:
  if ( v7 )
    qfree();
  return v10;
}

