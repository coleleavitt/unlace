__int64 __fastcall sub_46B00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebx

  v3 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  while ( v3 )
  {
    sub_428D0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x30u);
  }
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = a1 + 272;
  *(_QWORD *)(a1 + 296) = a1 + 272;
  *(_QWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 121) = strstr((const char *)(a1 + 5560), "bochsys.dll") != nullptr;
  v5 = sub_4D1F0(a1 + 64, 256);
  v6 = sub_46040(a1);
  sub_4D1F0(a1 + 64, v5);
  if ( v6 )
    return v6;
  v6 = sub_573C0(a1 + 64, a2);
  if ( !v6 )
    return v6;
  sub_4D200(a1 + 64);
  sub_45250(a1);
  return v6;
}

