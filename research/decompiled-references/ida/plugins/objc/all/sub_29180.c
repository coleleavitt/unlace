unsigned __int64 __fastcall sub_29180(__int64 *src, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 *v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h] BYREF
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  __int64 v25; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    v2 = src + 1;
    if ( a2 != src + 1 )
    {
      do
      {
        while ( 1 )
        {
          v3 = *src;
          if ( !(unsigned __int8)sub_27400(&v22, *v2) || !(unsigned __int8)sub_27400(&v23, v3) )
          {
LABEL_19:
            if ( !under_debugger )
              interr();
            BUG();
          }
          v4 = v22;
          hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v6 = hexdsp(268, v4);
          v7 = v23;
          v8 = *(_QWORD *)(v6 + 8) + *(_QWORD *)(v4 + 8);
          v9 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v10 = v9(268, v7);
          v11 = *v2;
          if ( v8 >= *(_QWORD *)(v10 + 8) + *(_QWORD *)(v7 + 8) )
            break;
          if ( (char *)v2 - (char *)src <= 8 )
          {
            if ( (char *)v2 - (char *)src == 8 )
              *v2 = *src;
          }
          else
          {
            memmove(src + 1, src, (char *)v2 - (char *)src);
          }
          *src = v11;
          if ( a2 == ++v2 )
            return v26 - __readfsqword(0x28u);
        }
        v21 = v2;
        while ( 1 )
        {
          v12 = *(v2 - 1);
          v13 = v2;
          if ( !(unsigned __int8)sub_27400(&v24, v11) || !(unsigned __int8)sub_27400(&v25, v12) )
            goto LABEL_19;
          v14 = v24;
          --v2;
          v15 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          v16 = v15(268, v14);
          v17 = v25;
          v18 = *(_QWORD *)(v16 + 8) + *(_QWORD *)(v14 + 8);
          v19 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          if ( v18 >= *(_QWORD *)(v19(268, v17) + 8) + *(_QWORD *)(v17 + 8) )
            break;
          v2[1] = *v2;
        }
        *v13 = v11;
        v2 = v21 + 1;
      }
      while ( a2 != v21 + 1 );
    }
  }
  return v26 - __readfsqword(0x28u);
}
