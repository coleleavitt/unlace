unsigned __int64 __fastcall sub_1F6B0(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  int v5; // r9d
  int v6; // ecx
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1D510((__int64)a1) )
  {
    v2 = sub_2A5D0(a1, *((unsigned int *)a1 + 341));
    v3 = *((unsigned int *)a1 + 341);
    v17 = v2;
    v4 = sub_2A5E0(a1, v3);
    v6 = v17;
    v7 = v4;
    if ( v17 != -1 )
    {
      v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 856LL);
      if ( v8 == sub_18560 )
        v9 = sub_298D0(a1 + 1704);
      else
        v9 = ((__int64 (__fastcall *)(_BYTE *, __int64 *))v8)(a1, &v17);
      if ( v9 )
      {
        v13 = sub_42C40(a1, *((unsigned int *)a1 + 341));
        v14 = v13;
        if ( v13 )
        {
          if ( (unsigned __int8)sub_461F0(a1, v13, *((unsigned int *)a1 + 196))
            && (unsigned __int8)sub_461F0(a1, v14, *((unsigned int *)a1 + 195)) )
          {
            v15 = sub_2A5D0(a1, *((unsigned int *)a1 + 341));
            v16 = *((unsigned int *)a1 + 341);
            v17 = v15;
            v7 = sub_2A5E0(a1, v16);
          }
        }
      }
      v6 = v17;
    }
    sub_65BB0(
      (_DWORD)a1,
      (unsigned int)"handle_initial_bpt: dyld.entry_ea: 0x%a, pc: 0x%a, sp: 0x%a\n",
      *((_QWORD *)a1 + 224),
      v6,
      v7,
      v5);
    v10 = *((_QWORD *)a1 + 224);
    if ( v10 != -1 && v17 == v10 && v7 != -1 )
    {
      v11 = *((int *)a1 + 294);
      v18 = 0;
      v12 = *(int *)(qword_8FB50 + 144 * v11 + 128);
      if ( v12 == (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                    a1,
                    v7,
                    &v18,
                    v12,
                    0) )
      {
        if ( (unsigned __int8)sub_29150(a1 + 1704, v18) )
        {
          sub_29370(a1 + 1704, 0, a1 + 1504, a1 + 1536, v18);
          *((_QWORD *)a1 + 187) = v18;
        }
      }
    }
    if ( a1[1370] )
      a1[2035] = sub_1F460((__int64)a1);
  }
  return v19 - __readfsqword(0x28u);
}

