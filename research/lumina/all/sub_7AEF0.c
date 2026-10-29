bool __fastcall sub_7AEF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  bool result; // al
  unsigned __int64 v5; // r15
  void *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13[2]; // [rsp+0h] [rbp-148h]
  int v14[2]; // [rsp+0h] [rbp-148h]
  int v15[2]; // [rsp+8h] [rbp-140h]
  void *v16; // [rsp+10h] [rbp-138h]
  int v17; // [rsp+1Ch] [rbp-12Ch]
  int v18; // [rsp+24h] [rbp-124h] BYREF
  int v19[2]; // [rsp+28h] [rbp-120h] BYREF
  void *v20; // [rsp+30h] [rbp-118h] BYREF
  __int128 v21; // [rsp+38h] [rbp-110h]
  __int64 v22; // [rsp+48h] [rbp-100h] BYREF
  __int128 v23; // [rsp+50h] [rbp-F8h]
  __int64 v24; // [rsp+60h] [rbp-E8h]
  __int128 v25; // [rsp+68h] [rbp-E0h]
  __int64 v26; // [rsp+78h] [rbp-D0h]
  int v27; // [rsp+80h] [rbp-C8h]
  __int64 v28; // [rsp+88h] [rbp-C0h]
  __int64 v29; // [rsp+90h] [rbp-B8h]
  int v30[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-A0h]
  __int64 v32; // [rsp+E8h] [rbp-60h]
  int v33; // [rsp+F0h] [rbp-58h]
  __int64 v34; // [rsp+F8h] [rbp-50h]
  __int64 v35; // [rsp+100h] [rbp-48h]
  unsigned __int64 v36; // [rsp+108h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  *(_QWORD *)v19 = *a2;
  v3 = a3 + *(_QWORD *)v19;
  if ( __CFADD__(a3, *(_QWORD *)v19) || !sub_6C650(&v18, (unsigned __int64 *)v19, a3 + *(_QWORD *)v19) )
    return 0;
  v5 = (unsigned int)v18;
  v17 = v18;
  if ( v18 != *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)v30 = 0;
    v20 = nullptr;
    v22 = 0;
    v31 = 0;
    v21 = 0;
    v23 = 0;
    sub_68E00(&v22, v30);
    v6 = *(void **)(a1 + 24);
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v16 = v6;
    v25 = 0;
    if ( v5 < (unsigned __int64)v6 )
    {
      v8 = v5;
      v9 = 104 * v5;
      do
      {
        *(_QWORD *)v15 = v8;
        *(_QWORD *)v13 = v9;
        sub_6C180(*(_QWORD *)(a1 + 16) + v9);
        v8 = *(_QWORD *)v15 + 1LL;
        v9 = *(_QWORD *)v13 + 104LL;
      }
      while ( *(_QWORD *)v15 + 1LL < (unsigned __int64)v16 );
      *(_QWORD *)(a1 + 24) = v5;
    }
    else if ( (unsigned __int64)v6 < v5 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)&v20 < v7 || (unsigned __int64)&v20 >= v7 + 104LL * *(_QWORD *)(a1 + 32) )
      {
        sub_7ABF0((_QWORD *)(a1 + 16), v5, (__int64)&v20);
      }
      else
      {
        sub_71CE0((__int64)v30, (__int64)&v20);
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        sub_7ABF0((_QWORD *)(a1 + 16), v5, (__int64)v30);
        sub_6C180((__int64)v30);
      }
      sub_6C180((__int64)&v20);
LABEL_15:
      v10 = 104 * v5;
      v11 = 0;
      *(_QWORD *)v14 = v10;
      while ( sub_74AE0(v11 + *(_QWORD *)(a1 + 16), (char **)v19, v3 - *(_QWORD *)v19) )
      {
        v11 += 104;
        if ( *(_QWORD *)v14 == v11 )
          goto LABEL_19;
      }
      return 0;
    }
    sub_6C180((__int64)&v20);
  }
  if ( v17 )
    goto LABEL_15;
LABEL_19:
  result = sub_6C650(v30, (unsigned __int64 *)v19, v3);
  if ( !result )
    return 0;
  v12 = *(_QWORD *)v19;
  *(_BYTE *)(a1 + 40) = v30[0] != 0;
  *a2 = v12;
  return result;
}
