__int64 __fastcall sub_1761C0(_QWORD *a1, __int64 a2, const char *a3, unsigned int a4)
{
  __int64 v5; // rbp
  unsigned __int8 v7; // r12
  unsigned int v8; // r13d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r12d
  __int64 v14; // rax
  int v16; // [rsp-8h] [rbp-98h]
  int v17; // [rsp+0h] [rbp-90h]
  void *v18; // [rsp+8h] [rbp-88h]
  __int128 v19; // [rsp+10h] [rbp-80h]
  int v20; // [rsp+20h] [rbp-70h]
  int v21; // [rsp+28h] [rbp-68h]
  int v22; // [rsp+30h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-58h]

  v5 = a1[7];
  v19 = 0;
  v18 = nullptr;
  v7 = sub_18FFB0(1);
  v8 = sub_173E80((__int64)a1, a2, a3, (const __m128i *)a4);
  sub_18FFB0(v7);
  v13 = sub_18FA20(v7, a2);
  while ( (unsigned __int64)(int)v5 < a1[7] )
  {
    if ( !(unsigned __int8)sub_178380(
                             (_DWORD)a1,
                             a2,
                             v9,
                             v10,
                             v11,
                             v12,
                             v16,
                             v17,
                             (_DWORD)v18,
                             v19,
                             DWORD2(v19),
                             v20,
                             v21,
                             v22,
                             v23) )
    {
      if ( !unk_2439A0 )
        sub_198E10(508);
      BUG();
    }
  }
  v14 = a1[13];
  if ( v14 )
    v14 += 32;
  a1[16] = v14;
  if ( (_BYTE)v8 )
    v13 = 0;
  sub_18FA40(v13);
  if ( v18 )
    j__free(v18);
  return v8;
}
