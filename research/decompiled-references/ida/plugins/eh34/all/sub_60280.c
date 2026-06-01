unsigned __int64 __fastcall sub_60280(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  _DWORD *v11; // rax
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a5 >= *(_DWORD *)(a2 + 64) )
    goto LABEL_9;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * a5);
  v6 = *(_QWORD *)(v5 + 56);
  if ( v6 )
  {
    if ( *(_DWORD *)v6 == 55 && *(_BYTE *)(v6 + 32) == 6 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, (const char *)a2);
      if ( !hexdsp(384, a3, v8) )
      {
        v11 = *(_DWORD **)(v5 + 56);
        v13 = 0;
        *v11 = 56;
        if ( a4 < *(_DWORD *)(a2 + 64) )
        {
          sub_60140(
            a1,
            a2,
            a1[22],
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * a4) + 8LL) + 32LL),
            &v13);
          return v14 - __readfsqword(0x28u);
        }
LABEL_9:
        sub_5F190();
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}

