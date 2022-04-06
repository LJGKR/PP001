#pragma once


namespace Museun
{
	class MCommand
	{
	public:
		MCommand() {}
		virtual ~MCommand() {}

		virtual void Execute() {    }
	};
}