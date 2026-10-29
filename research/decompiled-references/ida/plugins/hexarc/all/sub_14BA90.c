__int64 __fastcall sub_14BA90(__int64 a1, int a2)
{
  unsigned __int8 *v2; // rax
  int v3; // ebp
  int v4; // r12d
  int v5; // ebp
  unsigned __int8 v7[16]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v8[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v2 = *(unsigned __int8 **)(a1 + 40);
  v9 = __readfsqword(0x28u);
  v3 = *(_DWORD *)v2;
  v4 = *((_DWORD *)v2 + 1);
  if ( *(_DWORD *)v2 == 29 )
  {
    sub_11A350(a1 + 48, a2, 0, *((_DWORD *)v2 + 9), *(_QWORD *)(a1 + 24), 0);
    sub_11D380((__int64)v8, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 32LL));
    sub_11EAC0(a1 + 32, v8);
    v5 = 51;
    sub_1166E0((__int64)v8);
    goto LABEL_4;
  }
  if ( (unsigned int)(v3 - 32) <= 9 )
  {
    sub_11D380((__int64)v7, v2 + 32);
    sub_11D380((__int64)v8, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 48LL));
    sub_11EAC0(a1 + 32, v7);
    sub_11EAC0(a1 + 48, v8);
    v5 = v3 + 11;
    sub_1166E0((__int64)v8);
    sub_1166E0((__int64)v7);
LABEL_4:
    *(_DWORD *)a1 = v5;
    *(_DWORD *)(a1 + 4) = v4;
    return 1;
  }
  return 0;
}

