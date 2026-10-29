_BOOL8 __fastcall sub_34120(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  _BOOL8 result; // rax
  int v6; // eax
  char v7; // dl
  bool v8; // zf
  __int64 v9; // rax
  _QWORD *v10; // rdi
  struct _Unwind_Exception *v11; // rbx
  int v12; // [rsp+Ch] [rbp-8Ch] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+48h] [rbp-50h]
  __int128 v19; // [rsp+58h] [rbp-40h]
  unsigned __int64 v20; // [rsp+68h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 2608);
  v3 = *(_QWORD *)(a1 + 2640);
  v20 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 2672) != v3 )
    goto LABEL_2;
  v6 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v6 == 1 )
  {
    if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 8240LL) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 8240LL);
      if ( !(unsigned int)sub_26920(a1 + 1208, (__int64)&v13, &v12, 4) )
      {
        v17 = 0;
        v14 = 0xFFFFFFFFLL;
        v15 = -1;
        v16 = 0;
        v18 = 0;
        v19 = 0;
        set_debug_event_code();
        if ( (HIDWORD(v16) & 0xFFFFFFF) != 5 )
        {
          v11 = (struct _Unwind_Exception *)sub_31DA0(&v14, 5);
          free_debug_event();
          _Unwind_Resume(v11);
        }
        sub_446A0(*(_QWORD *)(a1 + 2704), &v14);
        v9 = *(_QWORD *)(a1 + 1200);
        v10 = *(_QWORD **)(a1 + 2672);
        LOBYTE(v16) = 1;
        v17 = -1;
        v15 = *(_QWORD *)(v9 + 8240);
        if ( v10 == (_QWORD *)(*(_QWORD *)(a1 + 2688) - 72LL) )
        {
          sub_1B9A0(a1 + 2624);
        }
        else
        {
          *v10 = 0xFFFFFFFFLL;
          v10[1] = -1;
          v10[2] = 0;
          copy_debug_event();
          *(_QWORD *)(a1 + 2672) += 72LL;
        }
        free_debug_event();
        goto LABEL_2;
      }
      goto LABEL_17;
    }
LABEL_10:
    if ( !v2 )
      goto LABEL_11;
    goto LABEL_12;
  }
  v7 = v2;
  if ( v6 != 7 )
    goto LABEL_6;
  if ( *(_BYTE *)(a2 + 16) || !*(_BYTE *)(a1 + 2713) )
    goto LABEL_10;
  sub_25E50(a1 + 1208, *(_QWORD *)(a1 + 2704) + 4888LL, *(_BYTE *)(a1 + 2714));
LABEL_17:
  v7 = *(_BYTE *)(a1 + 2608);
LABEL_6:
  if ( !v7 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 2 )
    {
LABEL_2:
      result = 1;
      goto LABEL_3;
    }
LABEL_11:
    result = (unsigned int)sub_25D80(a1 + 1208) == 0;
    goto LABEL_3;
  }
LABEL_12:
  result = 0;
  v8 = *(_BYTE *)(a1 + 1208) == 0;
  *(_BYTE *)(a1 + 2608) = 0;
  if ( !v8 )
    result = (unsigned int)sub_25D60(a1 + 1208, 0) == 0;
LABEL_3:
  *(_BYTE *)(a1 + 2609) = v2;
  return result;
}

