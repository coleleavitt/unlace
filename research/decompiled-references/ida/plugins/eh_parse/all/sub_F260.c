unsigned __int64 __fastcall sub_F260(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+8h] [rbp-40h]
  __int128 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a3 != -1 )
    {
      v8 = 0;
      v10 = 0;
      func_tail_iterator_set(&v8, a2, -1);
      v5 = (unsigned __int64 *)v8;
      v9 = -1;
      if ( v8 )
      {
        while ( 1 )
        {
          sub_EFD0(a1, *v5, v5[1], a3);
          v5 = (unsigned __int64 *)v8;
          if ( !v8 )
            break;
          v6 = v9 + 1;
          if ( *(_DWORD *)(v8 + 128) <= v9 + 1 )
          {
            lock_func_range(v8, 0);
            return v11 - __readfsqword(0x28u);
          }
          ++v9;
          if ( v6 >= 0 )
            v5 = (unsigned __int64 *)(*(_QWORD *)(v8 + 136) + 16LL * v6);
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

