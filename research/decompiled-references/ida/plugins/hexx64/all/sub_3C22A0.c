unsigned __int64 __fastcall sub_3C22A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 880);
    v4 = a2;
  }
  else
  {
    v7 = sub_389C40(a1, 0);
    v3 = *(_QWORD *)(a1 + 880);
    v4 = v7;
    if ( !v7 )
    {
      *(_DWORD *)(v3 + 8) = 0;
      *(_QWORD *)(v3 + 16) = 0;
      return v13 - __readfsqword(0x28u);
    }
    *(_QWORD *)(a1 + 888) = v7;
  }
  *(_QWORD *)(v3 + 24) = sub_38C8B0(v4);
  v5 = sub_38D720(v4 + 80);
  if ( v5 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 16) = v5;
  }
  else
  {
    v12 = 0;
    v8 = sub_38D3D0(v4 + 80, nullptr, &v12, nullptr, a3);
    if ( v8 == -1 )
    {
      v11 = sub_38D760(v4 + 80);
      if ( v11 == -1 )
      {
        if ( *(_DWORD *)(v4 + 80) == 1 && *(_DWORD *)(*(_QWORD *)(v4 + 88) + 8LL) == 68 )
        {
          *(_QWORD *)(v3 + 16) = 0;
          *(_DWORD *)(v3 + 8) = 5;
        }
        else
        {
          *(_QWORD *)(v3 + 16) = 0;
          *(_DWORD *)(v3 + 8) = 4;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 8) = 3;
        *(_QWORD *)(v3 + 16) = v11;
      }
    }
    else
    {
      v9 = v12;
      v10 = *(_QWORD *)(v3 + 32);
      *(_DWORD *)(v3 + 16) = v8;
      *(_DWORD *)(v3 + 8) = 2;
      v12 = v10;
      *(_QWORD *)(v3 + 32) = v9;
    }
    clear_tinfo_t();
  }
  return v13 - __readfsqword(0x28u);
}

