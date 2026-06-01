unsigned __int64 __fastcall sub_3A810(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r12
  __int64 v4; // r13
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  char v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v2 = *(_BYTE *)(a2 + 33);
  v21 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 1) != 5 )
  {
LABEL_2:
    v4 = *(_QWORD *)(a2 + 8);
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 )
    goto LABEL_8;
  if ( v4 == 12 )
  {
    if ( (unsigned __int8)is_off() )
    {
      if ( (unsigned __int8)get_refinfo() )
      {
        v18 = *(_QWORD *)(a1 + 616);
        v19 = v20 & 0x4F;
        if ( v19 == (*(_DWORD *)(v18 + 688) | 0x40) || v19 == (*(_DWORD *)(v18 + 692) | 0x40) )
          return v21 - __readfsqword(0x28u);
      }
    }
    v2 = *(_BYTE *)(a2 + 33);
    if ( *(_BYTE *)(a2 + 1) == 5 )
    {
      v4 = *(_QWORD *)(a2 + 24);
      goto LABEL_3;
    }
    goto LABEL_2;
  }
LABEL_3:
  if ( (*(_BYTE *)(a1 + 252) & 8) == 0 && !v2 && !v4 )
    return v21 - __readfsqword(0x28u);
LABEL_8:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, *(&off_A07A0 + v2), 32);
  if ( v2 != 14 )
  {
    if ( v2 != 4 )
    {
      if ( (*(_BYTE *)(a1 + 252) & 8) != 0 )
      {
        v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v6 == sub_38AB0 )
        {
          v7 = *(_QWORD *)(a1 + 32);
          if ( v7 )
          {
            v8 = v7 + 1;
            v9 = *(_QWORD *)(a1 + 32);
            --v7;
          }
          else
          {
            v9 = 1;
            v8 = 2;
          }
          v10 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v8 )
          {
            v17 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v17;
            v10 = v17;
          }
          *(_QWORD *)(a1 + 32) = v8;
          *(_BYTE *)(v10 + v7) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
        }
        else
        {
          v6((_QWORD *)a1, 32);
        }
        return sub_3A6C0((_QWORD *)a1, *(unsigned __int8 *)(a2 + 32), -1);
      }
      if ( v2 <= 3u || v4 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 32);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, v4, 10);
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 32);
      }
    }
    return v21 - __readfsqword(0x28u);
  }
  v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
  if ( v11 == sub_38AB0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      v14 = v12 + 1;
      v13 = *(_QWORD *)(a1 + 32);
      --v12;
    }
    else
    {
      v13 = 1;
      v14 = 2;
    }
    v15 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < v14 )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(a1 + 24) = v16;
      v15 = v16;
    }
    *(_QWORD *)(a1 + 32) = v14;
    *(_BYTE *)(v15 + v12) = 32;
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13) = 0;
  }
  else
  {
    v11((_QWORD *)a1, 32);
  }
  return (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "VL", 32);
}

