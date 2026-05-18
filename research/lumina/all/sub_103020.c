unsigned __int64 __fastcall sub_103020(__int64 a1, int a2, __int64 *a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r12d
  __int64 v10; // r9
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r13
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 *v34; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE *v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+20h] [rbp-B8h]
  __int64 v37; // [rsp+28h] [rbp-B0h]
  __int16 v38; // [rsp+30h] [rbp-A8h]
  _BYTE v39[6]; // [rsp+32h] [rbp-A6h] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v7 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 36) = 1;
    sub_F11D0(
      *(_QWORD *)a1,
      "json_object() requires an even number of arguments",
      -1,
      1,
      (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
      a7);
    return __readfsqword(0x28u) ^ v40;
  }
  v36 = 100;
  v37 = 0;
  v34 = (__int64 *)a1;
  v35 = v39;
  v38 = 1;
  sub_102750(&v34, 123);
  if ( a2 <= 0 )
    goto LABEL_9;
  if ( byte_1BAD40[*(_WORD *)(*a3 + 20) & 0x3F] == 3 )
  {
    v11 = a3;
    v12 = 0;
    while ( 1 )
    {
      v7 += 2;
      sub_1029E0(&v34);
      v17 = sub_D9DB0(*v11, 1u, a4, v13, v14, v15, v16);
      v22 = sub_D9CE0(*v11, 1u, a4, v18, v19, v20, v21);
      sub_102A10(&v34, v17, v22);
      sub_102750(&v34, 58);
      sub_102C90(&v34, a3[v12 + 1], a4, v23, v24, v25, v26);
      if ( a2 <= v7 )
        break;
      v12 = v7;
      v11 = &a3[v7];
      if ( byte_1BAD40[*(_WORD *)(*v11 + 20) & 0x3F] != 3 )
        goto LABEL_12;
    }
LABEL_9:
    sub_102750(&v34, 125);
    if ( !HIBYTE(v38) )
      sub_F4BA0((__int64)&v34, 125, v27, v28, v29, v30);
    v31 = *(_QWORD *)a1;
    *(_BYTE *)(v31 + 23) = 74;
    *(_WORD *)(v31 + 20) |= 0x800u;
    return __readfsqword(0x28u) ^ v40;
  }
LABEL_12:
  v32 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 36) = 1;
  sub_F11D0(v32, "json_object() labels must be TEXT", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v10);
  if ( !(_BYTE)v38 )
    sub_C91C0((__int64)v35, (__int64)"json_object() labels must be TEXT");
  return __readfsqword(0x28u) ^ v40;
}
