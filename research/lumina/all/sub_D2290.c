__int64 __fastcall sub_D2290(__int64 a1)
{
  char v1; // r15
  unsigned __int8 v2; // al
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-50h]
  int v13; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  if ( v1 )
  {
    v2 = *(_BYTE *)(a1 + 22);
    if ( v2 <= 3u || v2 == 5 )
    {
      v8 = sub_CC380(a1);
      if ( v8 )
        goto LABEL_9;
      v1 = *(_BYTE *)(a1 + 8);
    }
  }
  v3 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 296) = 0;
  v4 = *(_QWORD *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 304);
  v6 = sub_D2260(*(int *)(v3 + 4) + 144LL, v12);
  v7 = (__int64)v6;
  if ( v6 )
  {
    *v6 = v3;
    v6[1] = v5;
    v6[2] = v6 + 18;
    *((_WORD *)v6 + 34) = 257;
    *((_WORD *)v6 + 30) = -1;
    v6[4] = v4;
    v6[16] = v12;
    *((_BYTE *)v6 + 63) = 2 * (v1 != 0);
    v13 = (int)&loc_80006;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, void *, int *))(v3 + 40))(
           v3,
           v12,
           v6 + 18,
           &loc_80006,
           &v13);
    if ( v8 )
    {
      sub_C9EC0(v7, 0);
      v9 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v7 + 16));
        *(_QWORD *)v9 = 0;
      }
      sub_C91C0(v7, 0);
    }
    else
    {
      if ( (v13 & 1) != 0 )
        *(_BYTE *)(v7 + 66) = 1;
      if ( *(_QWORD *)v5 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
        if ( (v11 & 0x400) != 0 )
          *(_BYTE *)(v7 + 68) = 0;
        if ( (v11 & 0x1000) != 0 )
          *(_BYTE *)(v7 + 69) = 0;
      }
      *(_QWORD *)(a1 + 296) = v7;
    }
  }
  else
  {
    v8 = 7;
  }
LABEL_9:
  sub_C34F0(a1);
  return v8;
}
