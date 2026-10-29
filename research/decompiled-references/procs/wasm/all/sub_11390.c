unsigned __int64 __fastcall sub_11390(_WORD *a1)
{
  int v1; // ebx
  void *v2; // rsi
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+10h] [rbp-88h]
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-64h] BYREF
  int v16; // [rsp+38h] [rbp-60h] BYREF
  void *v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h]
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v1 = 0;
  v19 = __readfsqword(0x28u);
  a1[125] = 0;
  sub_10500((__int64)(a1 + 112), &v14);
  sub_10180((__int64)(a1 + 112), &v15);
  if ( v15 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        sub_10340((__int64)(a1 + 112), &v16);
        sub_10B60((__int64)&v17, &v16);
        v2 = &unk_1DA78;
        if ( v18 )
          v2 = v17;
        (*(void (__fastcall **)(_WORD *, void *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v2, 32);
        if ( v17 )
        {
          v18 = 0;
          qfree(v17);
        }
        if ( ++v1 >= v15 )
          goto LABEL_13;
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v3 == sub_105C0 )
          break;
        v3(a1, 32);
      }
      v4 = *((_QWORD *)a1 + 4);
      if ( v4 )
      {
        v5 = v4 + 1;
        v6 = *((_QWORD *)a1 + 4);
        v7 = *((_QWORD *)a1 + 3);
        --v4;
        if ( *((_QWORD *)a1 + 5) >= v5 )
          goto LABEL_10;
      }
      else
      {
        v7 = *((_QWORD *)a1 + 3);
        v6 = 1;
        v5 = 2;
        if ( *((_QWORD *)a1 + 5) >= 2u )
          goto LABEL_10;
      }
      v13 = v6;
      v12 = v4;
      v11 = v5;
      v8 = qvector_reserve(a1 + 12, v7, v5, 1);
      v6 = v13;
      v4 = v12;
      *((_QWORD *)a1 + 3) = v8;
      v5 = v11;
      v7 = v8;
LABEL_10:
      *((_QWORD *)a1 + 4) = v5;
      *(_BYTE *)(v7 + v4) = 32;
      *(_BYTE *)(*((_QWORD *)a1 + 3) + v6) = 0;
    }
  }
LABEL_13:
  v9 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 36) |= 0x80u;
  (*(void (__fastcall **)(_WORD *, __int64))(v9 + 128))(a1, 0xFFFFFFFFLL);
  return v19 - __readfsqword(0x28u);
}
