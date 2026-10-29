void __fastcall mcp_plugin_t::~mcp_plugin_t(mcp_plugin_t *this)
{
  mcp_plugin_t::~mcp_plugin_t(this);
  qfree();
}

