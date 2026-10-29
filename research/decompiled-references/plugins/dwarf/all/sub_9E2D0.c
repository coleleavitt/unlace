__int64 __fastcall sub_9E2D0(__int64 a1, __int64 *a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (***v10)(); // rdi
  __int64 (**v11)(); // rax
  unsigned __int64 (*v12)(); // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // r14
  __int64 (*v15)(); // rax
  unsigned int v16; // eax
  const char *numbered_type_name; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // al
  bool v21; // zf
  __int64 v22; // [rsp+0h] [rbp-148h] BYREF
  __int64 v23; // [rsp+8h] [rbp-140h]
  __int64 v24[4]; // [rsp+10h] [rbp-138h] BYREF
  __int128 v25; // [rsp+30h] [rbp-118h]
  __int128 v26; // [rsp+40h] [rbp-108h]
  __int64 v27; // [rsp+50h] [rbp-F8h]
  __int128 v28; // [rsp+58h] [rbp-F0h]
  __int64 v29; // [rsp+68h] [rbp-E0h]
  __int128 v30; // [rsp+70h] [rbp-D8h]
  __int64 v31; // [rsp+A8h] [rbp-A0h]
  __int128 v32; // [rsp+B0h] [rbp-98h]
  __int64 v33; // [rsp+C0h] [rbp-88h]
  __int128 v34; // [rsp+C8h] [rbp-80h]
  __int64 v35; // [rsp+E4h] [rbp-64h]
  __int64 v36; // [rsp+ECh] [rbp-5Ch]
  __int64 v37; // [rsp+F4h] [rbp-54h]
  unsigned __int64 v38; // [rsp+FCh] [rbp-4Ch]
  __int64 v39; // [rsp+108h] [rbp-40h]
  unsigned __int64 v40; // [rsp+118h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v3 = sub_97BF0((__int64)a2);
  if ( v3 > 0x43u )
  {
    if ( (unsigned __int16)(v3 - 16642) <= 1u )
      goto LABEL_9;
    return 0;
  }
  if ( v3 <= 0xAu )
  {
    if ( v3 == 2 )
      goto LABEL_9;
    return 0;
  }
  v4 = 1LL << ((unsigned __int8)v3 - 11);
  if ( (v4 & 0x100600900081100LL) == 0 )
  {
    if ( (v4 & 1) != 0 )
      sub_99180(a2, (__int64 (__fastcall ***)(_QWORD, __int64 *))a1, 0);
    return 0;
  }
LABEL_9:
  v7 = operator new(0x20u);
  v10 = *(__int64 (****)())(a1 + 32);
  *(_QWORD *)v7 = off_C9528;
  *(_DWORD *)(v7 + 8) = 1;
  v24[0] = v7;
  *(_OWORD *)(v7 + 16) = 0;
  v37 = 0x80000000LL;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v39 = 0;
  v35 = 0;
  v36 = 0;
  v38 = 0xFFFFFFFF00000000LL;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v24[3] = 0;
  v11 = *v10;
  v12 = (unsigned __int64 (*)())(*v10)[4];
  if ( v12 == sub_12F90 )
  {
    v13 = 0x8000000000000000LL;
    v14 = a2;
    v23 = 0;
    v22 = 0x8000000000000000LL;
  }
  else
  {
    v18 = ((__int64 (__fastcall *)(__int64 (***)(), __int64 *))v12)(v10, a2);
    v22 = v18;
    v23 = v19;
    if ( (v18 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v18 == -1 )
    {
      v10 = *(__int64 (****)())(a1 + 32);
      v14 = a2;
      v11 = *v10;
    }
    else
    {
      v20 = sub_98E20(&v22, v24);
      v10 = *(__int64 (****)())(a1 + 32);
      v14 = v24;
      v21 = v20 == 0;
      v11 = *v10;
      if ( v21 )
        v14 = a2;
    }
  }
  v15 = *v11;
  if ( v15 == sub_12F60
    || (v5 = ((__int64 (__fastcall *)(__int64 (***)(), _QWORD, __int64 *, unsigned __int64, __int64, __int64, __int64, __int64, __int64))v15)(
               v10,
               *(_QWORD *)(a1 + 24),
               v14,
               v13,
               v8,
               v9,
               v22,
               v23,
               v24[0]),
        v5 == 1) )
  {
    v16 = (unsigned int)sub_58830(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 144LL), (__int64)v14);
    if ( v16 )
    {
      numbered_type_name = (const char *)get_numbered_type_name(
                                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 144LL) + 8LL),
                                           v16);
      sub_84ED0(*(__int64 **)(a1 + 24), numbered_type_name);
    }
    else
    {
      sub_9D820(*(_QWORD *)(a1 + 24), v14, *(_DWORD **)(a1 + 32), *(const __m128i ***)(a1 + 40));
    }
    v5 = 0;
  }
  sub_1B750((__int64)v24);
  return v5;
}
