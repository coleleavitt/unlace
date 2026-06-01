bool __fastcall sub_11A5E0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  char v5; // dl
  bool result; // al
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-A0h]
  __int64 (__fastcall **v14)(); // [rsp+10h] [rbp-98h] BYREF
  __int64 v15; // [rsp+18h] [rbp-90h]
  __int64 v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+50h] [rbp-58h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  unsigned __int64 v24; // [rsp+78h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a4 - 15) > 3 || (*(_BYTE *)(a1 + 606) & 2) == 0 )
    return 0;
  v5 = *(_BYTE *)(a4 + 48);
  if ( v5 != 2 )
  {
    result = a3 == 0 || a2 == nullptr;
    if ( result )
      return result;
    v8 = a4 + 48;
    if ( v5 == 4 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( (unsigned int)(*(_DWORD *)v9 - 8) > 1 )
          break;
        v8 = v9 + 32;
        v5 = *(_BYTE *)(v9 + 32);
        if ( v5 != 4 )
          goto LABEL_15;
      }
      v12 = -1;
      v13 = 0;
    }
    else
    {
LABEL_15:
      v12 = -1;
      v13 = 0;
      if ( v5 == 1 )
      {
        v10 = *(int *)(v8 + 8);
        LOBYTE(v13) = 1;
        v12 = v10;
        HIDWORD(v13) = *(_DWORD *)(v8 + 4);
        goto LABEL_17;
      }
      if ( v5 == 5 )
      {
        v11 = *(_QWORD *)(v8 + 8);
        LOBYTE(v13) = 5;
        v12 = *(_QWORD *)(v11 + 8);
        HIDWORD(v13) = *(_DWORD *)(v8 + 4);
LABEL_17:
        v23 = 0;
        v21 = 0x800000000LL;
        v22 = 0;
        if ( !(unsigned __int8)sub_1EAE10(a2, (__m128i *)&v21, &v12, a3, 0) || sub_315890((__int64)&v21, 0) )
        {
          sub_312B80((__int64)&v21);
          goto LABEL_11;
        }
        sub_312B80((__int64)&v21);
        return 0;
      }
    }
    HIDWORD(v13) = *(_DWORD *)(v8 + 4);
LABEL_11:
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v14 = &off_4DD520;
    v19 = a3;
    v20 = a4;
    return (unsigned int)sub_11F830(a2, (__int64)&v14) == 0;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(a4 + 48), &v14, 1u) || v14 )
    return 0;
  result = a3 == 0 || a2 == nullptr;
  if ( !result )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v14 = &off_4DD4F8;
    v19 = a4;
    return (unsigned int)sub_11F830(a2, (__int64)&v14) == 0;
  }
  return result;
}

